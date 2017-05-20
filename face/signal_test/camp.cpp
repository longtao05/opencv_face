#include "camp.h"


#include<QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>

static CvMemStorage* storage1 = 0;
static CvHaarClassifierCascade* cascade1 = 0;



 char* cascade_name1="../haar_like/haarcascade_frontalface_alt2.xml";
/*    "../haar_like/haarcascade_profileface.xml";*/


Camp::Camp(QWidget *parent) :
    QWidget(parent)
{
}


int Camp::face_identify()
{
    CvCapture* capture = 0;
    IplImage *frame, *frame_copy = 0;
    /*int optlen = strlen("--cascade=");
    const char* input_name;
*/
    cascade1 = (CvHaarClassifierCascade*)cvLoad( cascade_name1, 0, 0, 0 );

    if( !cascade1 )
    {
        fprintf( stderr, "ERROR: Could not load classifier cascade\n" );
        fprintf( stderr,
            "Usage: facedetect --cascade=\"<cascade_path>\" [filename|camera_index]\n" );
        return -1;
    }
    storage1 = cvCreateMemStorage(0);

    cvNamedWindow( "result", 1 );

  /*
//Œì²âÍŒÆ¬
    IplImage* image = cvLoadImage("lena.jpg", 1 );
    if( image )
    {
        detect_and_draw( image );
        cvWaitKey(-1);
        cvReleaseImage( &image );
    }
    else
        printf("error\n");
  */


//Œì²âÊÓÆµ
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open Image"),"../face_video",tr("Image Files(*.mp4 *.avi)"));

    capture = cvCaptureFromAVI(fileName.toStdString().c_str());

    if( capture )
    {
        for(;;)
        {
            if( !cvGrabFrame( capture ))
                break;
            frame = cvRetrieveFrame( capture );
            if( !frame )
                break;
            if( !frame_copy )
                frame_copy = cvCreateImage( cvSize(frame->width,frame->height),
                IPL_DEPTH_8U, frame->nChannels );

            if( frame->origin == IPL_ORIGIN_TL )
                cvCopy( frame, frame_copy, 0 );
            else
                cvFlip( frame, frame_copy, 0 );

            IplImage *equ = cvCreateImage(cvGetSize(frame_copy),8, 1);
            IplImage *gray = cvCreateImage(cvGetSize(frame_copy), 8, 1);
            cvCvtColor(frame_copy, gray, CV_BGR2GRAY);
            cvEqualizeHist(gray, equ);

            //cvNamedWindow("yuantu");
            //cvNamedWindow("equ");
            //cvShowImage("yuantu",gray);
            //cvShowImage("equ",equ);

            detect_and_draw( frame_copy );

            if( cvWaitKey( 10 ) >= 0 )
                break;
            //cvReleaseImage(&gray);
            //cvReleaseImage(&equ);
        }



        cvReleaseImage( &frame_copy );
        cvReleaseCapture( &capture );
    }

    //cvWaitKey(-1); //Œì²âÍŒÆ¬µÄÊ±ºò£¬µÈŽýÏÔÊŸ
    cvDestroyWindow("result");

    return 0;
}

void Camp::detect_and_draw( IplImage* img )
{
    static CvScalar colors[] =
    {
        {{0,0,255}},
        {{0,128,255}},
        {{0,255,255}},
        {{0,255,0}},
        {{255,128,0}},
        {{255,255,0}},
        {{255,0,0}},
        {{255,0,255}}
    };

    double scale = 1.3;
    IplImage* gray = cvCreateImage( cvSize(img->width,img->height), 8, 1 );
    IplImage* small_img = cvCreateImage( cvSize( cvRound (img->width/scale),
        cvRound (img->height/scale)),
        8, 1 );
    int i;

    cvCvtColor( img, gray, CV_BGR2GRAY );
    cvResize( gray, small_img, CV_INTER_LINEAR );
    cvEqualizeHist( small_img, small_img );
    cvClearMemStorage( storage1 );

    if( cascade1 )
    {
        double t = (double)cvGetTickCount();
        CvSeq* faces = cvHaarDetectObjects( small_img, cascade1, storage1,
            1.1, 2, 0/*CV_HAAR_DO_CANNY_PRUNING*/,
            cvSize(30, 30) );

        printf("face's total is %d\n",faces->total);

        t = (double)cvGetTickCount() - t;
        printf( "detection time = %gms\n", t/((double)cvGetTickFrequency()*1000.) );
        for( i = 0; i < (faces ? faces->total : 0); i++ )
        {
            CvRect* r = (CvRect*)cvGetSeqElem( faces, i );
            //ÓÃŸØÐÎ¿ò¿ò³ö
            cvRectangle(img, cvPoint(r->x * scale, r->y * scale), cvPoint( (r->x + r->width) * scale, (r->y + r->height)  * scale), colors[i%8], 3, 8, 0);
            /*

            CvPoint center;
            int radius;
            center.x = cvRound((r->x + r->width*0.5)*scale);
            center.y = cvRound((r->y + r->height*0.5)*scale);
            radius = cvRound((r->width + r->height)*0.25*scale);
            cvCircle( img, center, radius, colors[i%8], 3, 8, 0 );
            */
        }
    }

    cvShowImage( "result", img );
    cvReleaseImage( &gray );
    cvReleaseImage( &small_img );
}

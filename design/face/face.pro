#-------------------------------------------------
#
# Project created by QtCreator 2017-03-05T23:44:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    facetest.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    facetest.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui


INCLUDEPATH += /usr/local/include \
                /usr/local/include/opencv \
                /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so    \
        /usr/local/lib/libopencv_imgproc.so \
/usr/local/lib/libopencv_calib3d.so\
 /usr/local/lib/libopencv_contrib.so \
/usr/local/lib/libopencv_core.so \
/usr/local/lib/libopencv_features2d.so\
 /usr/local/lib/libopencv_flann.so \
/usr/local/lib/libopencv_gpu.so\
 /usr/local/lib/libopencv_highgui.so \
/usr/local/lib/libopencv_imgproc.so\
 /usr/local/lib/libopencv_legacy.so \
/usr/local/lib/libopencv_ml.so /usr/local/lib/libopencv_nonfree.so /usr/local/lib/libopencv_objdetect.so /usr/local/lib/libopencv_ocl.so /usr/local/lib/libopencv_photo.so /usr/local/lib/libopencv_stitching.so /usr/local/lib/libopencv_superres.so /usr/local/lib/libopencv_ts.a /usr/local/lib/libopencv_video.so /usr/local/lib/libopencv_videostab.so

OTHER_FILES += \
    haarcascade_frontalface_alt.xml \
    haarcascade_frontalface_alt2.xml


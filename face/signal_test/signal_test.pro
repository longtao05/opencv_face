#-------------------------------------------------
#
# Project created by QtCreator 2017-04-03T12:24:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = signal_test
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    face.cpp \
    picture.cpp \
    photoshop.cpp \
    login.cpp \
    file.cpp \
    identify.cpp \
    camp.cpp

HEADERS  += mainwindow.h \
    face.h \
    picture.h \
    photoshop.h \
    login.h \
    file.h \
    identify.h \
    camp.h

FORMS    += mainwindow.ui \
    face.ui \
    picture.ui \
    photoshop.ui \
    login.ui \
    file.ui


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
    haarcascade_frontalface_alt2.xml \
    ../haar_like/haarcascade_eye.xml \
    ../haar_like/haarcascade_frontalface_alt.xml \
    ../haar_like/haarcascade_frontalface_alt2.xml \
    ../haar_like/haarcascade_mcs_nose.xml \
    ../face_img/300008.JPG \
    ../face_img/300004.jpg \
    ../face_img/300007--孔畅.jpg \
    ../face_img/Gray_Image.jpg \
    ../face_img/Image.jpg \
    ../face_img/lena.jpg




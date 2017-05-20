#ifndef CAMP_H
#define CAMP_H

#include <QWidget>
#include "cv.h"
#include "highgui.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include <time.h>
#include <ctype.h>

#ifdef _EiC
#define WIN32
#endif

class Camp : public QWidget
{
    Q_OBJECT
public:
    explicit Camp(QWidget *parent = 0);

    void detect_and_draw( IplImage* image );

    int face_identify() ;
signals:

public slots:

};

#endif // CAMP_H

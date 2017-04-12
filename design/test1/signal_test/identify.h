#ifndef IDENTIFY_H
#define IDENTIFY_H

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

#include<iostream>
#ifdef _EiC
#define WIN32
#endif


class Identify
{
public:
    Identify();
    ~Identify();
    void detect_and_draw( IplImage* image );
    int face_identify(IplImage* image) ;
private:


};

#endif // IDENTIFY_H

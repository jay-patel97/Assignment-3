#ifndef fountainpen_h
#define fountainpen_h

#include "pen.h"

class FountainPen : public Pen {
public:
FountainPen(std::string pen_name)
: Pen(pen_name) {}
FountainPen() : Pen(std::string("FountainPen")){}

std::string drawLine();
std::string drawCircle();
};

#endif

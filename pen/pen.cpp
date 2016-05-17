#include <iostream>
#include <string>

#include "pen.h"

std::string Pen::getName(){
return pen_name;
}
std::string Pen::drawLine(){
return Pen::getName().append(" draws a line.");
}
std::string Pen::drawCircle(){
return Pen::getName().append(" draws a circle.");}

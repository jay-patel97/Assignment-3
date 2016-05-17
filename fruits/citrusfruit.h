#ifndef citrusfruit_h
#define citrusfruit_h

#include <string>
#include <iostream>

class CitrusFruit{
protected:
float ph;
public:
 CitrusFruit(float ph) : ph(ph){}

 virtual const char * getName();
 virtual float getPh();
 };

 #endif

#ifndef lemon_h
#define lemon_h

#include "citrusfruit.h"

class Lemon : public CitrusFruit {
public:
Lemon(float ph) : CitrusFruit(ph){}
const char * getName();
float getPh();
};

#endif

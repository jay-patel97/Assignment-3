#ifndef orange_h
#define orange_h

#include "citrusfruit.h"

class Orange : public CitrusFruit {
public:
Orange(float ph) : CitrusFruit(ph){}
const char * getName();
float getPh();
};


#endif

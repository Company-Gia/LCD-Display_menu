#ifndef LCDStateMap_h
#define LCDStateMap_h

#include "LCDState.h"

class LCDStateMap
{
private:
    void calcXL();
    void calcYL();

public:
    LCDState *originLCDState;
    int x, y;
    bool displayState;

    LCDStateMap(LCDState *);
    ~LCDStateMap();

    void displayON();
    void displayOFF();

    int getXLFC(int);
};

#endif
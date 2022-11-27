#include "LCDStateMap.h"
#include <iostream>

LCDStateMap::LCDStateMap(LCDState *originLCDState) { this->originLCDState = originLCDState; }
LCDStateMap::~LCDStateMap() {}

void LCDStateMap::displayON() { this->displayState = true; }
void LCDStateMap::displayOFF() { this->displayState = false; }

// TODO: Implement these methods
void LCDStateMap::calcXL() {}
void LCDStateMap::calcYL() {}
int LCDStateMap::getXLFC(int) {}

int main()
{

    return 0;
}
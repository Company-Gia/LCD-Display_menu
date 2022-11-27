#include "LCDState.h"

#include <iostream>
using namespace std;

LCDState::LCDState(Node3D *node3D, bool startState)
{
    this->node3D = node3D;
    this->currentState = startState;
}

LCDState::~LCDState() {}

char *LCDState::getMSG(int MSG)
{
    switch (MSG)
    {
    case 1:
        return this->MSG1;
        break;
    case 2:
        return this->MSG2;
        break;
    default:
        break;
    }
}
void LCDState::setMSG(int MSG, char *str)
{
    switch (MSG)
    {
    case 1:
        this->MSG1 = str;
        break;
    case 2:
        this->MSG2 = str;
        break;
    default:
        break;
    }
}

void LCDState::printMSG(int MSG)
{
    switch (MSG)
    {
    case 1:
        // TODO: analogWrite(MSG1) ?
        break;
    case 2:
        // TODO: analogWrite(MSG2) ?
        break;
    default:
        break;
    }
}

void LCDState::activateState() { this->currentState = true; }
void LCDState::deactivateState() { this->currentState = false; }

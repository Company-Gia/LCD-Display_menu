#ifndef LCDState_h
#define LCDState_h

#include "Node3D.h"

class LCDState
{
public:
    Node3D *node3D;
    char *MSG1, *MSG2;
    bool currentState;

    LCDState(Node3D *, bool);
    ~LCDState();

    char *getMSG(int);        // Ritorna la stringa del messaggio n
    void setMSG(int, char *); // Modifica della stringa del messaggio n
    void printMSG(int);       // Stampa sulla console la stringa del messaggio n

    void activateState();
    void deactivateState();
};

#endif
#ifndef StatusMenu_LinkedList_h
#define StatusMenu_LinkedList_h

#include <LiquidCrystal.h>
#include "abstract/LinkedList.h"

//TODO: finire di configurare i metodi ereditati
class StatusMenu_LinkedList : public Node  {
private:
    Node* _head;
    LiquidCrystal _LCDDisplay;
public:
    StatusMenu_LinkedList(Node*, LiquidCrystal);
};

#endif
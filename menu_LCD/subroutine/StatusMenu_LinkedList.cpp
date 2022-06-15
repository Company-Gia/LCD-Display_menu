#include "StatusMenu_LinkedList.h"

//TODO: finire di configurare i metodi ereditati
StatusMenu_LinkedList::StatusMenu_LinkedList(Node* head, LiquidCrystal LCDDisplay) {
    this->_head = head,
    this->_LCDDisplay = LCDDisplay;
}
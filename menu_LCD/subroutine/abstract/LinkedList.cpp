/**
 * @file LinkedList.cpp
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief cpp file containing implementations of LinkedList class methods
 * @version 0.1
 * @date 2022-06-15
 */

#include "LinkedList.h"

LinkedList::LinkedList(Node* head) { this->_head = head; }
LinkedList::~LinkedList() {}

Node* LinkedList::getHead() { return this->_head; }
void LinkedList::setHead(Node* newHead) { this->_head = newHead; }

void LinkedList::insertNode() { // Che parametri?

}
void LinkedList::deleteNode() {

}
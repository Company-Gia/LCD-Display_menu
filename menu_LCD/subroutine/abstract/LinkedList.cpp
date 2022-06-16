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
void LinkedList::setHead(Node* newHead) {
    if (newHead != nullptr)
        this->_head = newHead;
}

void LinkedList::insertNode_bottom(Node* newNode) { // TODO: test this shit
    if (newNode != nullptr) {
        if (this->_head == nullptr) {
            this->_head = newNode;
            return;
        } else {
            Node* tmp = this->_head;
            while (tmp->getNext() != nullptr)
                tmp->setNext(tmp->getNext());
            tmp->setNext(newNode);
        }
    }
}

void LinkedList::deleteNode() {     // TODO: complete this shit
    Node* tmpPrev = this->_head, tmpNext = nullptr;

}

int LinkedList::getListLength() {
    //Node* tmp = new Node(this->getHead());    // What is the difference between this
    Node* tmp = this->getHead();                // and this? What is better?
    int count = 0;
    for (; tmp->getNext() != nullptr; count++)
        tmp->setNext(tmp->getNext());
    return count;
}
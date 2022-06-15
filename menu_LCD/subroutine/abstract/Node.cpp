/**
 * @file Node.cpp
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief cpp file containing implementations of Node class methods
 * @version 0.1
 * @date 2022-06-15
 */

#include "Node.h"

Node::Node(int listPos, Node* next, Node* prev) {
    this->_listPos = listPos;
    this->_next = next;
    this->_prev = prev;
}
Node::~Node() {}

Node* Node::getPrev() { return this->_prev; }
void Node::setPrev(Node* newPrev) { this->_prev = newPrev; }

Node* Node::getNext() { return this->_next; }
void Node::setPrev(Node* newNext) { this->_prev = newNext; }

int Node::getListPos() { return this->_listPos; }
void Node::setListPos(int newListPos) { this->_listPos = newListPos; }

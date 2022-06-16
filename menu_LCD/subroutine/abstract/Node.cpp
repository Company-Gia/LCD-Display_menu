/**
 * @file Node.cpp
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief cpp file containing implementations of Node class methods
 * @version 0.1
 * @date 2022-06-15
 */

#include "Node.h"

Node::Node(int listPos, Node* next, Node* prev) {
    if (listPos >= -1 && next != nullptr && prev != nullptr) {
        this->_listPos = listPos;
        this->_next = next;
        this->_prev = prev;
    }
}

Node::Node(Node* next, Node* prev) {
    if (next != nullptr && prev != nullptr) {
        this->_listPos = -1;
        this->_next = next;
        this->_prev = prev;
    }
}

Node::Node(Node* node) {
    if (node != nullptr) {
        this->_listPos = -1;
        this->_next = node->getNext();
        this->_prev = node->getPrev();
    }
}

Node::Node() {
    this->_listPos = -1;
    this->_next = nullptr;
    this->_prev = nullptr;
}

Node::~Node() {}

Node* Node::getPrev() { return this->_prev; }
void Node::setPrev(Node* newPrev) { this->_prev = newPrev; }

Node* Node::getNext() { return this->_next; }
void Node::setPrev(Node* newNext) { this->_prev = newNext; }

int Node::getListPos() { return this->_listPos; }
void Node::setListPos(int newListPos) { this->_listPos = newListPos; }

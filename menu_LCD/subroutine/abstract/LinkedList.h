/**
 * @file LinkedList.h
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief A class header file that abstracts the concept of "linked list" so that it can be encapsulated in different data types.
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 */

/**
 * @file Node.h
 * @version 0.1
 * @date 2022-06-15
 */

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

class LinkedList {
private:
    Node* _head;
public:
    LinkedList(Node*);
    ~LinkedList();

    Node* getHead();
    void setHead(Node*);

    void insertNode(); // Che parametri mettere?
    void deleteNode();
};

#endif
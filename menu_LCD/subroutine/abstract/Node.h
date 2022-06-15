/**
 * @file Node.h
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief A class header file that abstracts the concept of "list node" so that it can be encapsulated in different data types.
 * @version 0.1
 * @date 2022-06-15
 */

#ifndef Node_h
#define Node_h

class Node {
private:
    int _listPos;
    Node* _next;
    Node* _prev;
public:
    Node(int, Node*, Node*);
    Node();
    ~Node();

    Node* getPrev();
    void setPrev(Node*);
    
    Node* getNext();
    void setNext(Node*);
    
    int getListPos();
    void setListPos(int);
};

#endif
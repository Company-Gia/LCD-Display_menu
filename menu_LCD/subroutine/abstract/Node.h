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
    /** @brief Construct a new Node object -> Inizializes all fields. */
    Node(int, Node* next, Node* prev);
    
    /** @brief Construct a new Node object -> Inizializes only pointers. */
    Node(Node* next, Node* prev);

    /** @brief Construct a new Node object -> Inizializes only pointers. */
    Node(Node* node);
    
    /** @brief Construct a new Node object -> Initializes an "empty" node. */
    Node();
    
    /** @brief Destroy the Node object -> It's the class's destructor. */
    ~Node();

    Node* getPrev();
    void setPrev(Node*);
    
    Node* getNext();
    void setNext(Node*);
    
    int getListPos();
    void setListPos(int);
};

#endif
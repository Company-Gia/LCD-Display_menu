#ifndef StatusMenu_Node_h
#define StatusMenu_Node_h

#include "abstract/Node.h"

class StatusMenu_Node : public Node  {
private:
    Node* _node;
public:
    StatusMenu_Node(Node*);
};

#endif
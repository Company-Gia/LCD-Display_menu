#ifndef Node3D_h
#define Node3D_h

class Node3D
{
public:
    /* Node coordinates */
    int xPos, yPos, zPos;

    /* _[x-y-z][n-p] stay for: axis [x-y-z] [next-previous] (where next rappresent [x-y-z]+1 ...) */
    Node3D *xn;
    Node3D *xp;
    Node3D *yn;
    Node3D *yp;
    Node3D *zn;
    Node3D *zp;

    Node3D(Node3D *xn, Node3D *xp, Node3D *yn, Node3D *yp, Node3D *zn, Node3D *zp, bool);

    /** @brief Destroy the Node3D object -> It's the class's destructor */
    ~Node3D();

    void calcXPos();
    void calcYPos();
    void calcZPos();

    int getCurrXPos();
    int getCurrYPos();
    int getCurrZPos();
};

#endif

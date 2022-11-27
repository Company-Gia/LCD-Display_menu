#ifndef Node3D_h
#define Node3D_h

class Node3D
{
private:
    void calc_xPos();
    void calc_yPos();
    void calc_zPos();

    /* Node coordinates */
    int _xPos, _yPos, _zPos;

public:
    /* _[x-y-z][n-p] stay for: axis [x-y-z] [next-previous] (where next rappresent [x-y-z]+1 ...) */
    Node3D *xn;
    Node3D *xp;
    Node3D *yn;
    Node3D *yp;
    Node3D *zn;
    Node3D *zp;

    Node3D(Node3D *xn, Node3D *xp, Node3D *yn, Node3D *yp, Node3D *zn, Node3D *zp);

    /** @brief Destroy the Node3D object -> It's the class's destructor */
    ~Node3D();

    int get_xPos();
    int get_yPos();
    int get_zPos();
};

#endif

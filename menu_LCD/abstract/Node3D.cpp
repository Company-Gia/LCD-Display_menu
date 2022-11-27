/**
 * @file Node.cpp
 * @author SaporeDiMarte_63 (ivenomail@noMailProvider.com)
 * @brief cpp file containing implementations of Node class methods
 * @version 0.1
 * @date 2022-06-15
 */

#include "Node3D.h"

#include <iostream>
using namespace std;

Node3D::Node3D(Node3D *xn, Node3D *xp, Node3D *yn, Node3D *yp, Node3D *zn, Node3D *zp, bool isOrigin)
{
    if (isOrigin) {
        this->xPos = 0;
        this->yPos = 0;
        this->zPos = 0;
    } else  {
        this->xPos = -1;
        this->yPos = -1;
        this->zPos = -1;
    }
    this->xn = xn;
    this->xp = xp;
    this->yn = yn;
    this->yp = yp;
    this->zn = zn;
    this->zp = zp;
}

Node3D::~Node3D() {}

// TODO: find a way to calc [x,y,z] pos
void Node3D::calcXPos() {
    int tmp = 0;
    while (this->xp != NULL) {
        
    }
}
void Node3D::calcYPos() {}
void Node3D::calcZPos() {}

int Node3D::getCurrXPos()
{
    calcXPos();
    return this->xPos;
}

int Node3D::getCurrYPos()
{
    calcYPos();
    return this->yPos;
}

int Node3D::getCurrZPos()
{
    calcZPos();
    return this->zPos;
}

int main()
{

    Node3D origin = Node3D(NULL, NULL, NULL, NULL, NULL, NULL, true);
    Node3D x1 = Node3D(NULL, &origin, NULL, NULL, NULL, NULL, false);

    cout << origin.getCurrXPos();

    cout << endl;

    return 0;
}

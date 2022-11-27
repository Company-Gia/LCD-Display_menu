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

Node3D::Node3D(Node3D *xn, Node3D *xp, Node3D *yn, Node3D *yp, Node3D *zn, Node3D *zp)
{
    this->_xPos = -1;
    this->_yPos = -1;
    this->_zPos = -1;

    this->xn = xn;
    this->xp = xp;
    this->yn = yn;
    this->yp = yp;
    this->zn = zn;
    this->zp = zp;
}

Node3D::~Node3D() {}

// TODO: find a way to calc [x,y,z] pos
void Node3D::calc_xPos() {}
void Node3D::calc_yPos() {}
void Node3D::calc_zPos() {}

int Node3D::get_xPos()
{
    calc_xPos();
    return this->_xPos;
}

int Node3D::get_yPos()
{
    calc_yPos();
    return this->_yPos;
}

int Node3D::get_zPos()
{
    calc_zPos();
    return this->_zPos;
}

int main()
{

    cout << "ooo";

    return 0;
}

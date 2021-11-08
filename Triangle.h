//
// Created by deend on 11/7/2021.
//

#ifndef MDERANI_HW3_Q2_TRIANGLE_H
#define MDERANI_HW3_Q2_TRIANGLE_H
#include <iostream>
#include "Polygyon.h"
using namespace std;



class Triangle: public Polygon {
public:
    int getArea();
    void draw();
};


#endif //MDERANI_HW3_Q2_TRIANGLE_H

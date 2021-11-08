//
// Created by deend on 11/7/2021.
//

#include "Triangle.h"
#include "Polygyon.h"
using namespace std;

int Triangle::getArea() {
    return ((1/2)*width*height);
}

void Triangle::draw() {
    int j = 1;
    for(int i=0; i<height; i++){
        int k = 1;
        while(k<=j){}
        cout << "*";
        k++;
    }
    cout << endl;
    j+=2;
}
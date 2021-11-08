//
// Created by deend on 11/7/2021.
//

#include "Rectangle.h"
#include "Polygyon.h"


int Rectangle::getArea() {
    return width * height;
}

void Rectangle::draw() {
    for(int i = 0; i<height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
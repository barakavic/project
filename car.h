#ifndef CAR_H
#define CAR_H

#include <GL/glut.h>

class Car{
    public:
    float x, y; // The cars position
    float width, height;
    float speed;
    


    Car();
    void draw();
    void moveLeft();
    void moveRight();
};  

#endif
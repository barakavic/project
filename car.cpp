#include "car.h"

Car::Car(){
    x = 0.0f;
    y = -0.8f;
    width = 0.1f;
    height = 0.2f;
    speed = 0.05f;
}

void Car::draw(){
    glColor3f(0.0f, 0.0f, 0.0f); // Blue color
    glBegin(GL_QUADS);
    glVertex2f(x - width/ 2, y - height/ 2);
    glVertex2f(x + width/ 2, y - height/ 2);
    glVertex2f(x + width/ 2, y + height/ 2);
    glVertex2f(x - width/ 2, y + height/ 2);


    glEnd();


}

void Car:: moveLeft(){
    if (x - speed > -0.9f)
    x-= speed;

}


void Car :: moveRight(){
    if (x + speed < 0.9f)
    x += speed;

}

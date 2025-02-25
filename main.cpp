#include <GL/glut.h>
#include "road.h"
#include "car.h"

Car car;

Road road; // road obj


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    road.draw();
    car.draw();

    glutSwapBuffers();

}


void handleKeys(int key, int x, int y){
    switch (key){
        case GLUT_KEY_LEFT:
            car.moveLeft();
            break;
        case GLUT_KEY_RIGHT:
            car.moveRight();
            break;
 
    }
    glutPostRedisplay();

}




void init(){
    glClearColor(0.0f, 0.5f, 0.8f, 1.0f); //sky blue bg
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("Driving Sim");

    init();
    glutDisplayFunc(display);
    glutSpecialFunc(handleKeys); // register special key handlers
    glutMainLoop();

    return 0;
}
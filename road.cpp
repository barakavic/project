#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <iostream>
#include <cmath>

//window dimensions
const int WIDTH = 800, HEIGHT = 600;

// Function to draw the straigh road
void drawRoad(){
    glColor3f(0.2f, 0.2f, 0.2f);//Dark gray road color
    glBegin(GL_QUADS);
        glVertex3f(-0.5f, -1.0f, 0.0f);
        glVertex3f(0.5f, -1.0f, 0.0f);
        glVertex3f(0.5f, 1.0f, 0.0f);
        glVertex3f(-0.5f, 1.0f, 0.0f);
    glEnd();

}

//Dashed lane markings

void drawLaneMarkings(){
    glColor3f(1.0f, 1.0f, 1.0f);//White dashed line color
    glLineWidth(5.0f);

    glEnable(GL_LINE_STIPPLE);
    glLineStipple(4, 0xAAAA);

    glBegin(GL_LINES);
        glVertex3f(0.0f, -1.0f, 0.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);

    glEnd();

    glDisable(GL_LINE_STIPPLE);
}

//Display Function

void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    drawRoad();
    drawLaneMarkings();

    glutSwapBuffers();

}

// OpenGl initialisation 
void init(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);//Black Bg
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);// Set Coordinates

}

//Main Method

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Straight Road with Lane Markings");

    glewInit();
    init();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;



}
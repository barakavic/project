#include "road.h"

Road::Road(float width): roadWidth(width){}

void Road::draw(){
    glColor3f(0.3f, 0.3f, 0.3f);// Dark gray road
    glBegin(GL_QUADS);
        glVertex2f(-roadWidth, -1.0f);
        glVertex2f(roadWidth, -1.0f);
        glVertex2f(roadWidth, 1.0f);
        glVertex2f(-roadWidth, 1.0f);

    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    float dashLegnth = 0.2f;
    float gap = 0.2f;
    float dashWidth = 0.02f;

    for (float y = -1.0f; y<1.0f; y+= dashLegnth + gap){
        glBegin(GL_QUADS);
            glVertex2f(-dashWidth, y);
            glVertex2f(dashWidth, y);
            glVertex2f(dashWidth, y + dashLegnth);
            glVertex2f(-dashWidth, y + dashLegnth);

        glEnd();
            
            


    }


}







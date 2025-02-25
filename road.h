#ifndef ROAD_H
#define ROAD_H

#include <GL/glut.h>
class Road{
public:
    Road(float width = 4.0f);
    void draw();

private:
    float roadWidth;
    
};


#endif
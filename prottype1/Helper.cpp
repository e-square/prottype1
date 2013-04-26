#include <iostream>

class Helper {
    Picture *scanedPicture;
    Square *squareObject;
    cvClass *cv;
    glClass *gl;
public:
    void runner();
}

Helper::Helper(Picture *kinectScannedPicture)
{
    this.scannedPicture = kinectScannedPicture;
    this.cv = new cvClass();
    this.gl = new glClass();
}

void runner()
{
    cv.HandVector(scannedPicture, obj);
    gl.dwaw(obj);
}


/* Test Class : Object */
class Object {
    double[][] vector;
public:
    double[][] getVector();
    void setVector(double startX, startY, startZ, endX, endY, endZ);
}

Object::Object(double startX, startY, startZ, endX, endY, endZ)
{
    this.setVector(startX, startY, startZ, endX, endY, endZ);
}

double[][] getVector
{
    return this.vector
}

void setVector(double startX, startY, startZ, endX, endY, endZ)
{
    this.vector = (!startX and !startY and !startZ and !endX and !endY and !endZ ) ? {{startX, startY, startZ},{endX, endY, endZ}} : {{0, 0, 0}, {0, 0, 0}};
}

/* Test Class : Square */
class Square : private Object
{
    double[] vertex;
public:
    double[] getVertex();
    void setVertex(double width, height, depth);
}

Square::Square(double width, height, depth)
{
    this.setVertex(width, height, depth);
}

double[] getVertex()
{
    return this.vertex;
}

void setVertex(double width, height, depth)
{
    this.vertex = {width, height, depth};
}

/* Random Method for Test */
class Test {
    Helper helper;
public:
    void generateRandomVertex();
    
}

void gnerateRandomVertex();
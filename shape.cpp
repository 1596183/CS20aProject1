#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
Shape(double width, double height)
{
this->width = width;
this->height = height;
}
double getWidth()
{
return width;
}
double getHeight()
{
return height;
}
virtual double area() = 0;
private:
double width;
double height;
};

class Triangle : public Shape 
{
public:
Triangle(double width, double height): Shape(width, height){}
double area()
{
return getWidth() * getHeight() *0.5;
}
};

class Rectangle : public Shape {
public:
Rectangle(double width, double height): Shape(width, height){}
double area()
{
return getWidth() * getHeight();
}
};
int main()
{
Triangle t(10, 20);
cout << "Triangle's Area :" << t.area() << endl;
Rectangle r(10, 20);
cout << "rectaangle's Area :" << r.area() << endl;
return 0;
}
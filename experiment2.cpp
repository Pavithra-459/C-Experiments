#include<iostream>
using namespace std;
class Shape 
{
    public:
      virtual float area()=0;
};
class Circle:public Shape
{
    public:
    float radius;
    public: 
    Circle (float r) {
        radius=r;
    }
    float area() {
        return 3.14*radius*radius;
    }
};
class Rectangle:public Shape 
{
    public:
    float length;
    float breadth;
    public:
    Rectangle(float l,float b) {
        length=l;
        breadth=b;
    }
    float area() {
        return length*breadth;
    }
};
class Triangle:public Shape 
{
    public:
    float base;
    float height;
    public:
    Triangle(float b,float h) {
        base=b;
        height=h;
    }
    float area() {
        return 0.5*base*height;
    }
};
int main() {
    Circle c(5);
    Rectangle r(4,6);
    Triangle t(10,8);
    Shape* ptr;
    ptr=&c;
    cout<<"Area of circle:"<<ptr->area()<<endl;
    ptr=&r;
    cout<<"Area of rectangle: "<<ptr->area()<<endl;
    ptr=&t;
    cout<<"Area of triangle:"<<ptr->area()<<endl;
    return 0;
}
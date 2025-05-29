//shape area calculator using inheritance.    
#include<iostream>
using namespace std;
class Shape{
public:
    virtual void CalculateArea(){
        cout<<"area not defined for generic shape."<<endl;
    }
};
 class Circle:public Shape{
private:
    float radius;
public:
    Circle (float r):radius(r){}

    void CalculateArea() override{
        float area=3.14*radius*radius;
        cout<<"area of circle :"<<area<<endl;
    }
 };
 class Rectangle:public Shape{
private:
    float length,width;
public:
    Rectangle(float l,float w):length(l),width(w){}

    void CalculateArea()override{
        float area=length*width;
        cout<<"Area of rectangle :"<<area<<endl;
    }
};
class Triangle : public Shape{
private:
    float base,height;
public:
    Triangle(float b,float h):base(b),height(h){}


    void CalculateArea()override{
        float area=0.5*base*height;
        cout<<"Area of triangle:"<<area<<endl;
    }
};
int main()
{
    Shape*shape;

    Circle circle(5.0);
    shape=&circle;
    shape->CalculateArea();


    Rectangle rectangle(4.0 ,6.0);
    shape=&rectangle;
     shape->CalculateArea();


      Triangle  triangle(3.0 ,4.0);
    shape=&triangle;
     shape->CalculateArea();


     return 0;
}
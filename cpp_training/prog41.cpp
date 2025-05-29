//area of triangle and rectangle using classes
#include<iostream>
using namespace std;
class Rectangle{
    public:
    float length,breadth;
    void getData(){
        cout<<"enter the length and breath of rectangle :";
        cin>>length>>breadth;
    }
    float computeArea(){
        return length*breadth;
    }
};
class Triangle{
    public:
    float base,height;
    void getData(){
        cout<<"enter base and heigth of triangle :";
        cin>>base>>height;
    }
    float computeArea(){
        return 0.5*base*height;
    }
};
int main(){
    Rectangle rect;
    Triangle tri;
    rect.getData();
    cout<<"area of rectangle ="<<rect.computeArea()<<endl;
    tri.getData();
    cout<<"area of triangle ="<<tri.computeArea()<<endl;
    return 0;
}


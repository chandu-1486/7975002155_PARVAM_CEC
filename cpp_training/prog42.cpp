#include<iostream>
using namespace std;
class Polygon
{
    public:
    int a;
    int b;
    void get_data(int n,int m)
    {
        a=n;
        b=m;
    }
};
class Rectangle:public Polygon{
    public:
    int area(){
        int result=a*b;
        return result;
    }
};
class Triangle:public Polygon{
    public:
    int area(){
        float result=0.5*a*b;
        return result;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    int length,breadth,base,height;
    std::cout<<"enter the length and breadth of a rectangle"<<std::endl;
    cin>>length>>breadth;
    r.get_data(length,breadth);
    int m=r.area();
    std::cout<<"area  of a rectangle"<<std::endl;
    std::cout<<"enter the base and heigth of triangle"<<std::endl;
    cin>>base>>height;
    t.get_data(base,height);
    float n=t.area();
    std::cout<<"area of triangle is :"<<n<<std::endl;
    return 0;
}
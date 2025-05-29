//create a class base with protected variable derive a class derived and use the protected variable in a public function
#include<iostream>
using namespace std;
class Base{
    protected:
    int protectedVar;
    public:
    Base(int value):protectedVar(value){}
};
class Derived:public Base{
    public:
    Derived(int value):Base(value){}
    void display(){
        cout<<"Protected Variable Value :"<<protectedVar<<endl;
    }
};
int main(){
    Derived obj(42);
    obj.display();
    return 0;
}
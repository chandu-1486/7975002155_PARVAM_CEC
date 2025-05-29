//create a class calculator with a function add()declared insidethe class and defined using the scope resolution operator outside the class 
#include<iostream>
using namespace std;
class Calculator{
    public:
    int add(int a,int b);
};
int Calculator::add(int a,int b){
    return a+b;
}
int main(){

    Calculator calc;
    int num1,num2;
    cout<<"Enter two numbers to add :";
    cin>>num1>>num2;
    int result=calc.add(num1,num2);
    cout<<"the sum is:"<<result<<endl;
    return 0;
}
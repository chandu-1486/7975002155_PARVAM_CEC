//create a class number with an inline function that displays the square of number
#include<iostream>
using namespace std;
class Number{
public:
    inline void displaySquare(int num){
        cout<<"square of"<<num<<"is:"<<num * num <<endl;
    }
};
int main(){
    Number number;
    int input;
    cout<<"enter a no to find its square";
    cin>>input;
    number.displaySquare(input);
    return 0;
}
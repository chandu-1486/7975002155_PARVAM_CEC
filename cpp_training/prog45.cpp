//create a class student that takes name and roll no as constructor parameters and display them using a function
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNumber;
    public:
    Student(string n,int roll): name(n),rollNumber(roll){}
    void displaydetails(){
        cout<<"roll no :"<<rollNumber<<endl;
        cout<<"Name :"<<name <<endl;
    }
};
int main(){
    Student student("Alice",101);
    student.displaydetails();
    return 0;
}
#include<iostream>
using namespace std;
class Employee
{
    public:
    Employee()
    {
        cout<<"Default Constructor Invoked"<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor evoked\n";
    }
};
int main(void)
{
    cout<<"In main func \n";
    cout<<"1st object \n";
    Employee e1;
    cout<<"2nd object \n";
    Employee e2;
    cout<<"ending main func"<<endl;
    return 0;
}
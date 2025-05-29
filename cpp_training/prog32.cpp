 //classes
 #include<iostream>
 using namespace std;
 class Account{
    public:
    float salary=60000;
 };
 class programmer:public Account{
    public:
    float bonus=5000;
 };
 int main(void){
    programmer pl;
    cout<<"Salary: "<<pl.salary<<endl;
    cout<<"Bonus: "<<pl.bonus<<endl;
    return 0;
 }
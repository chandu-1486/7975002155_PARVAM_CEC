//create a class person with public members name and age use an object to set the values of these members and display them
  #include<iostream>
  using namespace std;
  class Person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name:"<<name<<",Age:"<<age<<endl;

    }
  };
  int main(){
    Person p;
    p.name="Alice";
    p.age=25;
    p.display();
    return 0;
  }

















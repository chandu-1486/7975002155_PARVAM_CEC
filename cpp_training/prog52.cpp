//create a class employee and make three objects. store and display data for three different employees using each object 
#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    int id;
    double salary;
    void setDetails(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    
    Employee emp1, emp2, emp3;
    emp1.setDetails("Alice", 101, 50000);
    emp2.setDetails("Bob", 102, 60000);
    emp3.setDetails("Charlie", 103, 55000);
    cout << "Employee Details:" << endl;
    cout << "--------------------------" << endl;
    emp1.displayDetails();
    emp2.displayDetails();
    emp3.displayDetails();

    return 0;
}

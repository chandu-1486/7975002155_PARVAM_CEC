//convert celsius to farenheit and farenheit to celsius 
#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    int choice;
    cout << "Enter 1 to convert Celsius to Fahrenheit\n";
    cout << "Enter 2 to convert Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit.\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius.\n";
    } else {
        cout << "Invalid choice.\n";
    }
    return 0;
}
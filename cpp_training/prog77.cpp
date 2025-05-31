//find all  the leap year in the given range
#include <iostream>
using namespace std;
int main() {
    int startYear, endYear;
    cout << "Enter the start year: ";
    cin >> startYear;
    cout << "Enter the end year: ";
    cin >> endYear;
    cout << "Leap years between " << startYear << " and " << endYear << " are: ";
    for (int year = startYear; year <= endYear; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    cout << endl;
    return 0;
}
//an
#include <iostream>
using namespace std;

int main() {
    string num;
    int count[10] = {0};  // To count digits 0–9

    cout << "Enter a number: ";
    cin >> num;

    // Count how many times each digit appears
    for (int i = 0; i < num.length(); i++) {
        int digit = num[i] - '0';  // Convert character to number
        count[digit]++;
    }

    // Check if each digit matches the count
    bool isAuto = true;
    for (int i = 0; i < num.length(); i++) {
        int expected = num[i] - '0';
        if (count[i] != expected) {
            isAuto = false;
            break;
        }
    }

    if (isAuto)
        cout << num << " is an Autobiographical Number.";
    else
        cout << num << " is NOT an Autobiographical Number.";

    return 0;
}                                             
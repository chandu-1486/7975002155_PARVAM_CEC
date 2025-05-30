//a perfect no is a positive integer that is equal to the sum of its proper divisors(excluding the no itself)
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is not a Perfect Number." << endl;
    }
    return 0;
}
//find the given no 1399 is emirp or not
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int number = 1399;
    if (!isPrime(number)) {
        cout << number << " is not an emirp number because it is not prime." << endl;
        return 0;
    }
    int reversedNumber = reverseNumber(number);
    if (isPrime(reversedNumber) && reversedNumber != number) {
        cout << number << " is an emirp number." << endl;
    } else {
        cout << number << " is not an emirp number." << endl;
    }

    return 0;
}

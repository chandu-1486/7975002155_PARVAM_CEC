//sphenic number can be checked by fact that every sphenic number will have excatly eight divisors
#include <iostream>
using namespace std;
int countDistinctPrimeFactors(int n) {
    int count = 0;
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0)
            n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }

        if (n > 2)
        count++;

    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (countDistinctPrimeFactors(num) == 3)
        cout << num << " is a sphenic number." << endl;
    else
        cout << num << " is NOT a sphenic number." << endl;

    return 0;
};         
    
//find the missing no in an array from 1 to n with one no missing write a function to find the missing number
#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    
    return total - sum; 
}
int main() {
    int n;
    cout << "Enter the size of the array (n-1): ";
    cin >> n; 
    
    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements (from 1 to " << n << "): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}
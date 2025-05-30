//a neon number is a number where the sum of digits square of the no is equal to the no
#include <iostream>
int main() {
    int num, square, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    square = num * num;
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    
    if (sum == num) {
        std::cout << num << " is a neon number." << std::endl;
    } else 
    {
        std::cout << num << " is not a neon number." << std::endl;
    }
    return 0;
}
//create a class circle with a private radius and public function to input the radius and calculate the area
#include <iostream>
using namespace std;
class Circle {
private:
    float radius;
public:
    void inputRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        return 3.14 * radius * radius;
    }
};
int main() {
    Circle circle;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    circle.inputRadius(r);
    float area = circle.calculateArea();

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
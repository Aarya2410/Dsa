/*
NAME- Aarya Aggarwal
ROLL NO.-102215184
Description: Create objects for this class and call the member 
functions to find the area and perimeter of the rectangle
Acknowledgements:geeksforgeeks,collegues
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const {
        return length * width;
    }

    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle1(5, 8);
    Rectangle rectangle2(10, 4);

    double area1 = rectangle1.getArea();
    double perimeter1 = rectangle1.getPerimeter();

    double area2 = rectangle2.getArea();
    double perimeter2 = rectangle2.getPerimeter();

    cout << "Rectangle 1 - Area: " << area1 << " Perimeter: " << perimeter1 << endl;
    cout << "Rectangle 2 - Area: " << area2 << " Perimeter: " << perimeter2 << endl;

    return 0;
}

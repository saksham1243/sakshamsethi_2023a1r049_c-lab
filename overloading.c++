//write a progtam to demonstrate teh concept of function overloading.create a class with name shapes, 
//create a function with name area(),with area function calculate area of circle , area of rectangle,
// area of triangle, using function overloading
#include<iostream>
#include <cmath>
using namespace std;
class Shapes{
public:
    // Function overloading for area calculation
    double area(double radius) {
        return M_PI * radius * radius; // Circle: area = π * r^2
    }
    
    double area(double length, double width) {
        return length * width; // Rectangle: area = length * width
    }
    
    double area(double base, double height, int) {
        return (base * height) / 2; // Triangle: area = (base * height) / 2
    }
};

int main() {
    Shapes shape;
    cout << "Area of Circle : " << shape.area(5) << endl;
    cout << "Area of Rectangle : " << shape.area(4, 6) << endl;
    cout << "Area of Triangle : " << shape.area(3, 4, 0) << endl;
    return 0;
}

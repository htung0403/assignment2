#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
    double radius;
    string color;

    bool isValidRadius()
    {
        return radius > 0;
    }

    double circumference()
    {
        return 2 * M_PI * radius;
    }

    double area()
    {
        return M_PI * radius * radius;
    }

    string getColor()
    {
        return color;
    }
};

int main()
{
    Circle circle1;
    cout << "Enter the radius of the circle: ";
    cin >> circle1.radius;
    cout << "Enter the color of the circle: ";
    cin >> circle1.color;

    if (!circle1.isValidRadius())
    {
        cout << "Invalid radius! Radius must be positive." << endl;
        return 1;
    }

    cout << "Circumference of the circle: " << circle1.circumference() << " units" << endl;
    cout << "Area of the circle: " << circle1.area() << " square units" << endl;
    cout << "Color of the circle: " << circle1.getColor() << endl;
    return 0;
}
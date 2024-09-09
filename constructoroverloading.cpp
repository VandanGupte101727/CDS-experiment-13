#include<iostream>
using namespace std;

class Rectangle
{
    private:
    double length, width;

    public:
    // Default constructor
    Rectangle() 
    {
        length = 3.0;
        width = 4.0;
    }

    // Constructor with two parameters
    Rectangle(double l, double w) 
    {
        length = l;
        width = w;
    }

    // Constructor with one parameter
    Rectangle(double l) 
    {
        length = l;
        width = 5.0;
    }

    double perimeter() 
    {
        return 2 * (length + width);
    }
};

int main() 
{
    Rectangle r1, r2(6.5, 7.5), r3(8.2);
    cout << "No parameter passed: " << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Two parameters passed: " << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;
    cout << "One parameter passed: " << endl;
    cout << "Perimeter: " << r3.perimeter() << endl;
}

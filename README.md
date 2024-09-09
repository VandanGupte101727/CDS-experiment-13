# CDS-experiment-13

AIM:- To study and implement constructor overloading<br>

Theory:-<br>
In C++, constructor overloading enables a class to have many constructors with varying parameter counts or types. This allows different initialization methods for objects of the same class depending on the arguments sent in. Because each overloaded constructor handles a certain initialization, the class is more adaptive and flexible. To set particular member variables, some constructors may require one or more parameters, whereas the default constructor accepts none at all. The arguments handed in during object creation are used by the compiler to decide which constructor to invoke. Constructor overloading allows for several initialization methods while maintaining a clean implementation, which improves readability and reusability of code.<br>

CODE:-<br>

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
<br>

OUTPUT:-<br>
![exp13](https://github.com/VandanGupte101727/CDS-experiment-13/blob/main/Screenshot%202024-09-09%20at%208.40.13%20PM.png)<br>


Conclusion:-In this experiment we learnt about construction overloading in C++ 



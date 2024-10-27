// GeometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double circleArea(double radius) {
    return PI * pow(radius, 2);
}

double rectangleArea(double length, double width) {
    return length * width;
}

double triangleArea(double base, double height) {
    return base * height * 0.5;
}

int main()
{
    int choice;
    double radius, length, width, base, height;
    
    do {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice(1–4) :" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            do {
                cout << "Please enter the radius of the circle:" << endl;
                cin >> radius;
                if (radius < 0) {
                    cout << "You entered a negative value for the radius. Please enter a nonnegative value when prompted." << endl;
                }

            } while (radius < 0);

            cout << "The area of the circle is: " << circleArea(radius) << endl;
            break;
        case 2:
            do {
                cout << "Please enter the length of the rectangle:" << endl;
                cin >> length;
                cout << "Please enter the width of the rectangle:" << endl;
                cin >> width;

                if (length < 0) {
                    cout << "You entered a negative value for the length. Please enter a nonnegative value when prompted." << endl;
                }
                if (width < 0) {
                    cout << "You entered a negative value for the width. Please enter a nonnegative value when prompted." << endl;
                }
            } while (length < 0 || width < 0);

            cout << "The area of the rectangle is: " << rectangleArea(length, width) << endl;
            break;
        case 3:
            do {
                cout << "Please enter the length of the triangle’s base:" << endl;
                cin >> base;
                cout << "Please enter the height of the triangle:";
                cin >> height;
                if (base < 0) {
                    cout << "You entered a negative value for the base. Please enter a nonnegative value when prompted." << endl;
                }
                if (height < 0) {
                    cout << "You entered a negative value for the height. Please enter a nonnegative value when prompted." << endl;
                }
            } while (base < 0 || height < 0);

            cout << "The area of the triangle is: " << triangleArea(base, height) << endl;
            break;
        case 4:
            cout << "Exiting the program..." << endl;
            exit;
            break;
        default:
            cout << "You entered an invalid number. Please try again." << endl;
        }

    } while (choice != 4);
    
    return 0;
}


// TrianglesShapeCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter sides of a Triange: ";
    cin >> a >> b >> c; 

    if (a == b && b == c)
        cout << "Equilateral Triangle";
    else {
        if (a != b && a != c && b != c) {
            cout << "Scalene Triangle";
        }
        else {
            cout << "Isosceles Triangle";
        }
    }
}



// SwappingVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout << "Enter values for a and b";

    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << " b = " << b;
}
 
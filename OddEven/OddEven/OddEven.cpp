// OddEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Type a Whole Number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "This is an even number";
    }
    else {
        cout << "This is an odd number;";
    }
}
 
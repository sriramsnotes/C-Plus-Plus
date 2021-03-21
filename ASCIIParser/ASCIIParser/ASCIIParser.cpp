// ASCIIParser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    int val1, val2, val3, val4, val5;

    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    val1 = int(c1);
    val2 = int(c2);
    val3 = int(c3);
    val4 = int(c4);
    val5 = int(c5);

    cout << "ASCII message: " << val1 << " " << val2 << " " << val3 << " " << val4 << " " << val5;

    cout << "From Int to Char :" << endl;

    c1 = int(val1);
    c2 = int(val2);
    c3 = int(val3);
    c4 = int(val4);
    c5 = int(val5);

    cout << "Int to Char: " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5;


}



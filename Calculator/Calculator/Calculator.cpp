// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Calculator " << endl;

    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '-': cout << num1 << operation << num2 << " = " << num1 - num2; break;
        case '+': cout << num1 << operation << num2 << " = " << num1 + num2; break;
        case '*': cout << num1 << operation << num2 << " = " << num1 * num2; break;
        case '/': cout << num1 << operation << num2 << " = " << num1 / num2; break;
        case '%':
            bool isNumInt1, isNumInt2;

            isNumInt1 = ((int)num1 == num1);
            isNumInt2 = ((int)num2 == num2);

            if (isNumInt1 && isNumInt2) {
                cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2; break;
            }
            else {
                cout << "Not Valid!";
            }
            break;
            
        default: cout << "Not a Valid Operation" << endl;

    }
 }
 

// GuestTernary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int hostGuessNumber, guestGuessNumber;

    cout << "Host :";
    cin >> hostGuessNumber;
    system("cls");

    cout << "Guest :";
    cin >> guestGuessNumber;
    system("cls");

    (hostGuessNumber == guestGuessNumber) ? cout << "Correct!" : cout << "Failed!";
}
 

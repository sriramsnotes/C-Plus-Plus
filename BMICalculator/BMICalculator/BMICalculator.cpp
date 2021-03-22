// BMICalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 

int main()
{
    float height, weight, bmi;

    cout << "Enter your weight in kg and height in meter: ";
    cin >>  weight >> height;

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "Under Weight";
    }
    else if (bmi > 25) {
        cout << "Over Weight";
    }
    else {
        cout << "Normal Weight";
    }

    cout << "Your BMI Score is : " << bmi;

     
}

 
/******************************************************************************
//
// Name: Aiden R. Dusek
// Date: 9/1/2026
// Class: 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: DR. Reyes
// 
// Program Description: This program allows the users to input their temperature in degrees fahrenheit and-
//                      have it transfered into degrees Celsius!
//
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
//Integers: Celsius and Fahrenheit
double Celsius;
double Fahrenheit;

//Input Fahrenheit
cout << "Enter Fahrenheit:";
cin >> Fahrenheit;

//Celsius to Fahrenheit Formula
Celsius=(Fahrenheit-32.0)*5.0/9.0;

//Display Celsius
cout << "Celsius" << Celsius << endl;
    return 0;
}
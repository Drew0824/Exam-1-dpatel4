#include <iostream>
#include <iomanip>
using namespace std;


int main() {
cout << "This program finds the average and\n";
cout << "mean square of 2 numbers.\n"<< endl;

double firstNumber;
double secondNumber;
double Average;
double meanAverage;

cout << setprecision (2) << fixed;

cout << "Enter the First Number:\n";
cin  >> firstNumber;

cout << "Enter the Second Number:\n";
cin  >> secondNumber;

Average = (firstNumber + secondNumber) / 2;
meanAverage = (firstNumber * firstNumber + secondNumber * secondNumber) / 2;

cout << "The average is:\n" << Average << endl;
cout << "The mean average is\n" << meanAverage << endl;


}
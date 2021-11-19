/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

#include <iostream>
#include <string>
#include "conversion.cpp"
using namespace std;

int main() {
    string number1, number2;
    char operation;
    double num1, num2, sum, quotient, difference, product;

    cout << "Please enter two numbers and a operation: ";

    cin >> number1 >> number2;
    cin >> operation;

    num1 = stringToNum(number1);
    num2 = stringToNum(number2);

    if (operation == '+') {
        sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
    }
    else if (operation == '-') {
        difference = num1 - num2;
        cout << "The difference of " << num1 << " and " << num2 << " is " << difference;
    }
    else if (operation == '*') {
        product = num1 * num2;
        cout << "The product of " << num1 << " and " << num2 << " is " << product;
    }
    else if (operation == '/') {
        quotient = num1 / num2;
        cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient;
    }
    else
        cout << "invalid input";
}


// Copyright 2022 Brian Bongermino

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    int divide;
    int remainder;

    cin >> num1 >> num2;

    if (num1 / num2 != 0) {
        divide = (num1 / num2);
        remainder = (num1 % num2);
        if (remainder != 0) {
           cout << num1 << " is not a multiple of " << num2 << endl;
        } else {
            cout << num1 << " is " << divide << " times " << num2 << endl;
        }
    } else if (num2 / num1 !=0) {
        divide = (num2 / num1);
        remainder = (num2 % num1);
        if (remainder != 0) {
            cout << num2 << " is not a multiple of " << num1 << endl;
        } else {
        cout << num2 << " is " << divide << " times " << num1 << endl;
        }
    }
    return 0;
}

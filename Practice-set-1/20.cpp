//Q20. Write a program to find the greatest common divisor (GCD) of two numbers using a loop.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << "GCD = " << gcd;
    return 0;
}
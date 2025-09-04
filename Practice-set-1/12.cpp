//Q12. Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and imaginary roots using if-else.)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;  // discriminant

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        cout << "Real and Different Roots: " << root1 << " , " << root2;
    } else if (d == 0) {
        root1 = -b / (2*a);
        cout << "Real and Equal Roots: " << root1;
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        cout << "Complex Roots: " << real << " + " << imag << "i , " << real << " - " << imag << "i";
    }
    return 0;
}
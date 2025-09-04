//Q3. Take two integers as input and print the larger one using if-else.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Larger = " << a;
    else
        cout << "Larger = " << b;
    return 0;
}
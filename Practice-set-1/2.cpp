//Q2. Read an integer and check whether it is even or odd.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is Even";
    else
        cout << n << " is Odd";
    return 0;
}
//Q5. Take an integer and check whether it is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
    return 0;
}
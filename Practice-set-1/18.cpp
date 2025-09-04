//Q18. Check whether a given number is a palindrome or not. (Example: 121 is palindrome, 123 is not.)
#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
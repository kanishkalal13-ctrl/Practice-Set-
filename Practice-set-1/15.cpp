//Q15. Reverse the digits of a given number. (Example: input 1234 → output4321)
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed = " << rev;
    return 0;
}
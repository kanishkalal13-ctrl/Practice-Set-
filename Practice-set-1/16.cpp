//Q16. Find the sum of digits of a given number. (Example: input 1234 → output10)
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of Digits = " << sum;
    return 0;
}
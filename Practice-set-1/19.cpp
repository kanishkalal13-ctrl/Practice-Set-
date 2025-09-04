//Q19. Write a program to calculate the simple interest. Formula: SI =P ×R×T 100
#include <iostream>
using namespace std;

int main() {
    float P, R, T, SI;
    cout << "Enter Principal, Rate, Time: ";
    cin >> P >> R >> T;

    SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI;
    return 0;
}
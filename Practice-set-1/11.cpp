//Q11. Given marks of a student (0–100), print the grade: A (≥90), B (80–89), C(70–79), D (60–69), F (below 60).
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 80)
        cout << "Grade B";
    else if (marks >= 70)
        cout << "Grade C";
    else if (marks >= 60)
        cout << "Grade D";
    else
        cout << "Grade F";
    return 0;
}
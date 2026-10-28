#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int daysLate;
    double fine = 0.0; // // BUG 4 FIX: variable never initialized given value

    cout << "Days late: ";
    cin >> daysLate;

    if (daysLate > 0) // // BUG 1 FIX: Removed trailing semicolon after condition
    {
        fine = daysLate * 0.50;
    }

    if (daysLate == 0) // // BUG 2 FIX: Changed assignment '=' to comparison '=='
    {
        cout << "Returned on time. No fine." << endl;
    }

    if (daysLate >= 14) // // BUG 3 FIX: Added braces and corrected condition to >= 14
    {
        cout << "Membership suspended." << endl;
        cout << "Contact the library counter." << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Fine: RM" << fine << endl;

    return 0;
}
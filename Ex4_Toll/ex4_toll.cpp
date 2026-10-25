
/*
Cal Poly pseudocode:
BEGIN
    READ balance
    READ toll
    IF balance >= toll THEN
        COMPUTE balance = balance - toll
        DISPLAY "Gate open"
        DISPLAY new balance
    ELSE
        DISPLAY "Insufficient balance. Please reload."
        COMPUTE shortfall = toll - balance
        DISPLAY shortfall
    ENDIF
END
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double balance, toll;

    cout << "Enter card balance (RM): ";
    cin >> balance;

    cout << "Enter toll amount (RM): ";
    cin >> toll;

    cout << fixed << setprecision(2);

    if (balance >= toll)
    {
        balance = balance - toll;

        cout << "Gate open" << endl;
        cout << "New balance: RM" << balance << endl;
    }
    else
    {
        cout << "Insufficient balance. Please reload."
            << endl;

        cout << "Shortfall: RM" << toll - balance
            << endl;
    }

    return 0;
}

/*
Test results:
Balance 10.00, toll 5.30 -> Gate open, RM4.70
Balance 5.30, toll 5.30 -> Gate open, RM0.00
Balance 5.29, toll 5.30 -> Gate shut, shortfall RM0.01
Balance 0.00, toll 2.10 -> Gate shut, shortfall RM2.10
*/

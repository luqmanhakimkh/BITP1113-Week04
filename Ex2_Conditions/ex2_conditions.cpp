
/*
Cal Poly pseudocode:
BEGIN
    READ battery
    READ charging
    DISPLAY battery < 20
    DISPLAY battery < 20 AND NOT charging
    DISPLAY battery == 100 OR charging
    DISPLAY battery >= 0 AND battery <= 100
    DISPLAY 0 <= battery <= 100
END

Predictions for battery=15, charging=0:
1, 1, 0, 1, 1
*/

#include <iostream>
using namespace std;

int main()
{
    int battery, charging;

    cout << "Battery level (0-100): ";
    cin >> battery;

    cout << "Charging? (1=yes, 0=no): ";
    cin >> charging;

    cout << "battery < 20: "
        << (battery < 20) << endl;

    cout << "Saver on: "
        << (battery < 20 && !charging) << endl;

    cout << "Fully charged or charging: "
        << (battery == 100 || charging) << endl;

    cout << "Range OK: "
        << (battery >= 0 && battery <= 100) << endl;

    cout << "Chained comparison (incorrect): "
        << (0 <= battery <= 100) << endl;

    return 0;
}

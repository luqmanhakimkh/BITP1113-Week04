#include <iostream>
#include <iomanip>
using namespace std;

/*
READ weight
SET baseFee = 8.00
IF weight > 2.0 THEN
    SET fee = baseFee + 5.00
    DISPLAY "Heavy parcel: RM5.00 surcharge added"
ENDIF
DISPLAY fee
*/

int main() {
    double weight;
    double baseFee = 8.00;

    cout << "Enter parcel weight (kg): ";
    cin >> weight;

    if (weight > 2.0) {
        baseFee += 5.00;
        cout << "Heavy parcel: RM5.00 surcharge added" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Total Fee: RM" << baseFee << endl;

    return 0;
}
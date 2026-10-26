#include <iostream>
using namespace std;

/*
READ hour
IF hour >= 23 || hour < 6 THEN
    DISPLAY "Late entry: sign the log book"
    DISPLAY "Show your matric card"
ELSE
    DISPLAY "Welcome back"
    DISPLAY "Good night"
ENDIF
*/

int main() {
    int hour;

    cout << "Enter hour (0-23): ";
    cin >> hour;

    if (hour >= 23 || hour < 6) {
        cout << "Late entry: sign the log book" << endl;
        cout << "Show your matric card" << endl;
    }
    else {
        cout << "Welcome back" << endl;
        cout << "Good night" << endl;
    }

    return 0;
}
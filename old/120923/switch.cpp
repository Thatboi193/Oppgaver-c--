#include <iostream>

using namespace std;

int main() {
    int day;
    cout << "Select a number to see what day of the week it is: ";
    cin >> day;

    switch (day) {

        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;

         default:
            cout << "Please select a number between 1-7.  :)" << endl;
            main();

        



    }



cout << endl;
system("pause");
return 0;
}


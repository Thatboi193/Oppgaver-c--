#include <iostream>

using namespace std;

int main() {

    //convert seconds to whole hours and 



    int seconds;

    cout << "Enter seconds: ";

    cin >> seconds;

    int hour = seconds / 3600;

    int remaining_seconds = seconds % 3600;

    int minutes = remaining_seconds / 60;

    int remaing_seconds2 = remaining_seconds % 60;


    cout << seconds << " seconds are equal to " << hour << "Hour(s) and " << minutes << " minutes(s) and " << remaing_seconds2 << " second(s)";







    return 0;
}
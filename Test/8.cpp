#include <iostream>

using namespace std;

void lownum(int num1, int num2, int num3) {

    if (num1 < num2 && num1 < num3) {
        cout << num1 << " Is smallest";
    } if (num2 < num1 && num2 < num3) {
        cout << num2 << " Is smallest";
    } if (num3 < num1 && num3 < num2) {
        cout << num3 << " Is smallest";
    }



}

int main() {
    int num1, num2, num3;

    cout << "GIve me three numbers";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    lownum(num1, num2, num3);



    return 0;
}
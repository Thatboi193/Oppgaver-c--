#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3;

    cout << "GIve me three numbers";
    cin >> num1;
    cin >> num2;
    cin >> num3;


    if(num1 > num2 && num1 > num3) {
        cout << num1 << " Is greater";
    } if (num2 > num1 && num2 > num3) {
        cout << num2 << " Is greater";
    } if (num3 > num1 && num3 > num2) {
        cout << num3 << " Is greater";
    }






    return 0;
}
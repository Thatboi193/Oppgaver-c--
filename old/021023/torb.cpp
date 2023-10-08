#include <iostream>

using namespace std;

void torb(float num1, float num2, float num3) {

    if( num1 > num2 && num1 > num3) {

        cout << num1 << " is greater than " << num2 << " and " << num3;

    } if( num2 > num1 && num2 > num3) {

        cout << num2 << " is greater than " << num1 << " and " << num3;

    }  if( num3 > num1 && num3 > num2) {

        cout << num3 << " is greater than " << num1 << " and " << num2;

    }

}


int main() {
    float num1, num2, num3;
    cout << "Give me three numbers to totally math them. Enter num1: ";
    cin >> num1;
    cout << "num1 accepted. Enter num2: ";
    cin >> num2;
    cout << "num2 accepted. Enter num3: ";
    cin >> num3;

    torb(num1, num2, num3);

    return 0;
}
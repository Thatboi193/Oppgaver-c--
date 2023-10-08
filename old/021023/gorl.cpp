#include <iostream>

using namespace std;

void gorn(float num1, float num2) {

    if(num1 > num2) {

        cout << num1 << " is greater than " << num2;




    } if (num1 < num2) {
        cout << num2 << " is greater than " << num1;

    } else {

        cout << num1 << " is equal to " << num2;


    }






}



int main() {
    float num1, num2;
    cout << "Give me two numbers to totally math them. Enter num1: ";
    cin >> num1;
    cout << "num1 accepted. Enter num2: ";
    cin >> num2;
    gorn(num1, num2);






    return 0;
}
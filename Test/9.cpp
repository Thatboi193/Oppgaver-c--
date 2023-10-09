#include <iostream>

using namespace std;

void posneg(int num1) {

    if (num1 > 0) {
        cout << num1 << " Is posetive";
    } if (num1 < 0) {
        cout << num1 << " Is negative";
    } if (num1 == 0) {
        cout << num1 << " IS ZERO";
    }



}




int main() {

    int num1;
    cout << "Give me number: ";
    cin >> num1;

    posneg(num1);







    return 0;
}
#include <iostream>

using namespace std;


void add(int num1, int num2) {
    cout << endl;
    cout << num1 + num2;
}

void sub(int num1, int num2) {
    cout << endl;
    cout << num1 - num2;



}

void mult(int num1, int num2) {
     cout << endl;
    cout << num1 * num2;



}

void divi(int num1, int num2) {
     cout << endl;
    cout << num1 /  num2;

}

int main() {
    int num1, num2, num3;
    cout << "Give me two numbers: ";
    cin >> num1;
    cout << "num1 acepted now num2: ";
    cin >> num2;


    cout << "Choose mode" << endl;
    cout << "1. add" << endl;
    cout << "2. sub" << endl;
    cout << "3. mult" << endl;
    cout << "4. div" << endl;
    cin >> num3;

    switch (num3)
    {
    case 1:
        add(num1, num2);
        break;
    case 2:
        sub(num1, num2);
        break;
    case 3:
        mult(num1, num2);
        break;
    case 4:
        divi(num1, num2);
        break;
    }


    return 0;
}
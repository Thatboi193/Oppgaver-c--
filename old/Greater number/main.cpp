#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Give me two numbers. I will check which is greater:" << endl;

    cout << "Give me first number: ";
    cin >> num1;

    cout << "Give me second number ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2;
    } else {
        cout << num2 << " is greater that " << num1;

    }




    return 0;
}

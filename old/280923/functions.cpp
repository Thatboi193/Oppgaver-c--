#include <iostream>

using namespace std;


void math(float num1, float num2, int num3) {
    switch(num3) {

        case 1:
            cout << "Addition...";
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Subtraction...";
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Multiplication...";
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Division...";
            cout << "Result: " << num1 / num2 << endl;
            break;
        default:
        cout << "Invalid choice please pick 1-4.";
        

       
    }
}




int main() {
    float num1, num2;
    int num3;

cout << "Give me two numbers to math them. Enter num1: ";
    cin >> num1;
    cout << "num1 accepted. Enter num2: ";
    cin >> num2;




    cout << "|| Chose operation ||" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cin >> num3;
    math(num1, num2, num3);












    system("pause");
    return 0;
}
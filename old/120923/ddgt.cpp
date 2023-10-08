#include <iostream>

using namespace std;

int main() {
    int sel;

    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";

    cin >> sel;
    switch (sel) {
    double num1, num2;
        case 1:
            cout << "You have selected: Addition \n";
            cout << "Please enter two numbers \n";
            
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Results: " << num1 << " + " << num2 << " is equal to " << num1 + num2 << endl;
            break;
        case 2:
            cout << "You have selected: Subtraction \n";
            cout << "Please enter two numbers \n";
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Results: " << num1 << " - " << num2 << " is equal to " << num1 - num2 << endl;
            break;
        case 3:
            cout << "You have selected: Multiplication \n";
            cout << "Please enter two numbers \n";
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Results: " << num1 << " * " << num2 << " is equal to " << num1 * num2 << endl;
            break;
        case 4:
            cout << "You have selected: Division \n";
            cout << "Please enter two numbers \n";
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Results: " << num1 << " / " << num2 << " is equal to " << num1 / num2 << endl;
            break;
        default:
            cout << "Not a valid option \n";
            main();
        
    }
    system("pause");
    return 0;
} 
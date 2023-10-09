#include <iostream>

using namespace std;


int main() {

    int myArr[10] = {};

    for (int i = 0; i < 10; i++) {
        int num1 = 0;
        cout << "Give number: ";
        cin >> num1;
        myArr[i] = num1;
    }
    
    for (int i = 0; i < 10; i++) {
        if (myArr[i] % 2 == 0) {
            cout << myArr[i] << endl;
        }
       
    }




    return 0;

}
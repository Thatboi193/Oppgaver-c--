#include <iostream>

using namespace std;

int main() {

    int array[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter the " << i << " number: ";
        cin >> array[i];

    }
    

    for(int i = 0; i < 5; i++) {
        cout << array[i] << endl;
        

    }





    system("pause");
    return 0;
}
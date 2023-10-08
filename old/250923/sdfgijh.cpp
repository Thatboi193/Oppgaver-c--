#include <iostream>

using namespace std;


int main() {

     int numArray[3][4] = {{}, {}, {}};

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 4; j++) {
            
            cout << "Give me number for numArray: ";
            cin >> numArray[i][j];
            
            



        }



    }


    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 4; j++) {
        
            cout << "Array[" << i << "][" << j << "]= " << numArray[i][j] << endl;
            
        }

    }



    return 0;
}
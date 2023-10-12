#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
string myText;
int main() {
    ifstream input("input.txt");

    while(getline(input, myText)) {
        cout << myText << endl;
        if (myText == "A Z") {
        cout << " 11111111111111111 " << endl;
        }

    }
    


    return 0;
}
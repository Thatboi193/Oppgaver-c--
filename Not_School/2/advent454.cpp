#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream input("input.txt");
    if (!input.is_open()) {
        cout << "Failed to open input.txt" << endl;
        return 1;  // Exit with an error code.
    }

}
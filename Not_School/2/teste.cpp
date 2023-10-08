#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string myText;
    ifstream input("input.txt");
    vector <string> orig;
    vector <int> converted;

    while (getline(input, myText)) {
        // Skipping empty lines
        if (myText == "") {
            continue;
        }

        orig.push_back(myText);
    }

    // Resize the 'converted' vector to match the size of 'orig'
    converted.resize(orig.size());

    for (size_t i = 0; i < orig.size(); i++) {  // Changed loop condition to i < orig.size()
        try {
            converted[i] = stoi(orig[i]);
        } catch (const std::invalid_argument& ia) {
            cerr << "Invalid argument at index " << i << ": " << ia.what() << '\n';
        } catch (const std::out_of_range& oor) {
            cerr << "Out of range at index " << i << ": " << oor.what() << '\n';
        }
    }

    cout << endl;
    cout << orig.size() << endl;

    system("pause");
    return 0;
}

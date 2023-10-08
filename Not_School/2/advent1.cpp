#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string myText;
    ifstream input("input.txt");
    vector <int> orig = {};
    vector <int> sumvec = {};
    int sum;
    while (getline(input, myText)) {
        if (!myText.empty()) {
            int number = stoi(myText);
            orig.push_back(number);
        } else {
            for (int i = 0; i < orig.size(); i++) {
                sum += orig[i];

            }
            sumvec.push_back(sum);
            orig.clear();

        }
    }

        

    cout << endl;
    cout << orig.size();
    cout << sumvec.size();





    system("pause");
    return 0;
}
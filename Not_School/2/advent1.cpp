#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string myText;
    ifstream input("input.txt");
    vector <int> orig = {};
    vector <int> sumvec = {};
    int sum = 0;
    while (getline(input, myText)) {
        if (!myText.empty()) {
            int number = stoi(myText);
            orig.push_back(number);

        } else {
            for (int i = 0; i < orig.size(); i++) {
                cout << orig[i] << endl;
                sum += orig[i];

            }
            cout << endl;
            sumvec.push_back(sum);
            sum = 0;
            orig.clear();

        }
    }

        

    cout << endl;
    cout << orig.size() << endl; 
    cout << sumvec.size() << endl;
    sort(sumvec.begin(), sumvec.end());

    for (int i = 0; i < sumvec.size(); i++) {

        cout << sumvec[i] << endl;

    }
    int sum2 = 0;
    cout << endl;
    for (int i = 0; i < 3; i++) {
        sum2 += sumvec.back();
        sumvec.pop_back();
        
    }

    cout << "Top 3 = " << sum2 << endl;
    //system("pause");
    return 0;
}
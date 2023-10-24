#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

string myText;
int main() {
    ofstream output("output.txt");
    ifstream input("input.txt");
    int i = 0;
    while(getline(input, myText)) {
        size_t space_pos = myText.find(' ');
        string opponent_move = myText.substr(0, space_pos);
        string my_move = myText.substr(space_pos + 1);
        
        i++;

        output << "Opponent: " << opponent_move << ", Your move: " << my_move << " " << i << endl;
    }

    
    


    return 0;
}
#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct favgames {
    string title;
    string genre;
    int release_year;
};

int main() {
    favgames game[3]; // Declare an array of 3 favgames structs

    for (int i = 0; i < 3; i++) {  // loop to add 3 games to struct
        cout << "Enter Game Title " << i+1 << ": ";
        getline(cin, game[i].title);

        cout << "Enter Game Release Year: " << i+1 << ": ";
        cin >> game[i].release_year;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
        cout << "Enter Game Genre: " << i+1 << ": ";;
        getline(cin, game[i].genre);
    }

    // Display structure information
    for (int i = 0; i < 3; i++) {
        cout << "\nDisplaying Information for game " << i+1 << endl;
        cout << "Title: " << game[i].title << endl;
        cout << "Release Year: " << game[i].release_year << endl;
        cout << "Genre: " << game[i].genre << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;


struct favgames
{
    string title;
    string genre;
    int release_year;
};

int main() {

    
// loop for 3 to add 3 games to struct
    for(int i = 1; i <= 3; i++) {
        favgames game[i];

        cout << "Enter Game Title: ";
        cin >> game[i].title;

        cout << "Enter Game Release Year: ";
        cin >>  game[i].release_year;

        cout << "Enter Game Genre: ";
        cin >> game[i].genre;

    }


     //Displat structure information
 //   cout << "\n Displaying Information." << endl;
 //   cout << "Title: " << g1.title << endl;
 //   cout << "Realease Year: " << g1.release_year << endl;
 //   cout << "Genre: " << g1.genre << endl;






    return 0;
}
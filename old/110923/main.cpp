#include <iostream>
#include <string>

using namespace std;


int main() {

    string firstName = "Tor Vidar";
    string lastName = "Arnesen";
    string fullName = firstName.append(lastName);
    cout << fullName;


    return 0;
}
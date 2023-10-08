#include <iostream>

using namespace std;


struct car
{
    string brand;
    string model;
    int year;

};




int main() {

    car car1;

    cout << "Enter Car Brand: ";
    getline(cin, car1.brand);

    cout << "Enter Car Model: ";
    getline(cin, car1.model);

    cout << "Enter Car Release Year: ";
    cin >> car1.year;


  //Displat structure information
    cout << "\n Displaying Information." << endl;
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Car Release Year: " << car1.year << endl;





    return 0;
}
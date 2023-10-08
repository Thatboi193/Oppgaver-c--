#include <iostream>

using namespace std;

struct person
{
    string name;
    int age;
    float salary;

};





int main() {

    person p1;

    cout << "Enter full name: ";
    getline(cin, p1.name);
    cout << "Enter age in years: ";
    cin >> p1.age;
    
    cout << "Enter the salary amount: ";
    cin >> p1.salary;

    //Displat structure information
    cout << "\n Displaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary " << p1.salary << endl;




  return 0;
}

#include <iostream>

using namespace std;

struct person {

    string name;
    double age;
    string gender;
    double height;
    double weight;
    double salary;
    double balance;

};

int main() {
    person p1;

    cin >> p1.name;
    cin >> p1.age;
    cin >> p1.gender;
    cin >> p1.height;
    cin >> p1.weight;
    cin >> p1.salary;
    cin >> p1.balance;

    cout << endl;
    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.gender << endl;
    cout << p1.height << endl;
    cout << p1.weight << endl;
    cout << p1.salary << endl;
    cout << p1.balance << endl;
    return 0;
}
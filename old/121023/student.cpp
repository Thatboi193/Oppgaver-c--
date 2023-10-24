#include <iostream>

using namespace std;

class Stu
{
private:
    string firstName;
    string lastName;
    double dateOfBirth;
    string class1;

public:
    void intivar(string name1, string name2, double dob, string clas) {
       name1 = firstName;
       name2 = lastName;
       dob = dateOfBirth;
       clas = class1;
    }

    void out() {
        cout << firstName << endl;
        cout << lastName << endl;
        cout << dateOfBirth << endl;
        cout << class1 << endl;
        cout << endl;
    }

};


int main() {

    Stu student1;
    Stu student2;
    Stu student3;
    Stu student4;
    Stu student5;
    Stu student6;
    Stu student7;
    Stu student8;

    student1.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student1.out();
    student2.intivar("Nikolai Mikkelsen", "Moksnes", 30904, "1IMA");
    student2.out();
    student3.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student3.out();
    student4.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student4.out();
    student5.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student5.out();
    student6.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student6.out();
    student7.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student7.out();
    student8.intivar("Tor Vidar", "Arnesen", 151105, "1IMA");
    student8.out();




    return 0;
}
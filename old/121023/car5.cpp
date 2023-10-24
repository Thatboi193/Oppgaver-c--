#include <iostream>

using namespace std;

class Car 
{
private:

    string model;
    string company;
    double year;
    double weight;
    double height;
    
public:

    double initvar(string mdl, string com, double yr, double wei, double hei) {
         model = mdl;
         company = com;
         year = yr;
         weight = wei;
         height = hei;  
    }

    void out() {
       cout << "Model: " << model << endl;
       cout << "Company: " << company << endl;
       cout << "Release year: " << year << endl;
       cout << "Weight in kg: " << weight << endl;
       cout << "Height in meters: " << height << endl;
       cout << endl;
    }
};



int main() {
    Car car1;
    Car car2;
    Car car3;
    Car car4;

    car1.initvar("F-150", "Ford", 2022, 3000, 2.10);
    car1.out();

    car2.initvar("F-149", "Ford", 2021, 1999, 1.40);
    car2.out();

    car3.initvar("Banan", "Fruities", 200, 2, 0.05);
    car3.out();

    car4.initvar("Man", "God", -999999999, 999999999999, 999999999999999);
    car4.out();



    return 0;
}
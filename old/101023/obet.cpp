#include <iostream>

using namespace std;

class Room
{
public:
    double lenght;
    double width;
    double height;

    double calculateArea() {
        return lenght * width;
    }

    double calcualteVolum() {
        return lenght * width * height;
    }
       
private:


};

int main() {

    Room oneima;

    oneima.lenght = 50.5;
    oneima.width = 30;
    oneima.height = 25.3;

    cout << "Area of 1IMA room = " << oneima.calculateArea() << " m^2" << endl;
    cout << "Volum of 1IMA room = " << oneima.calcualteVolum() << " m^3" << endl;

    Room twoita;

    twoita.lenght = 100;
    twoita.width = 300;
    twoita.height = 400;

    cout << "Area of 2ITA room = " << twoita.calculateArea() << " m^2" << endl;
    cout << "Volum of 2ITA room = " << twoita.calcualteVolum() << " m^3" << endl;




    return 0;
}
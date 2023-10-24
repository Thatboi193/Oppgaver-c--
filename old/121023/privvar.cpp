#include <iostream>

using namespace std;

class banana
{
private:
    double length;
    double width;
    double height;

public:

    void initvar(double len, double wid, double hgt) {
        length = len;
        width = wid;
        height = hgt;
    }

    double calArea() {
        return length * width;
    }

    double carVol() {
        return length * width * height;
    }

};




int main() {
    
    banana oneima;

    oneima.initvar(50.5, 30, 25.3);

    cout << "Area of 1IMA is = " << oneima.calArea() << endl;
    cout << "Volume of IMA is = " <<oneima.carVol() << endl;



    return 0;
}
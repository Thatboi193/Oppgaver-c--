#include <iostream>

using namespace std;

class Rectangle
{
private:
    int side1;
    int side2;

public:

    Rectangle(int one, int two) {
        side1 = one;
        side2 = two;
    }

    void area() {
        cout << side1 * side2 << "m^2" << endl;
    }
};

int main() {
    Rectangle rec1(10, 20);
    
    rec1.area();
    
    return 0;
}
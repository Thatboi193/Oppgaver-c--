#include <iostream>

using namespace std;


class Flower
{
public:
    void photosynthesis() {
        cout << "MMMMmmm sunlight" << endl;
    }

};

class  White : public Flower {
public:
    void breakdance() {
        cout << "Yo im dancing" << endl;
    }

};

class  Yellow : public Flower {
public:
    void smile() {
        cout << "Yo im smiling" << endl;
    }

};

class  Blue : public Flower {
public:
    void crye() {
        cout << "Yo im crying" << endl;
    }

};

int main() {
    White white1;
    Yellow yellow1;
    Blue blue1;

    white1.photosynthesis();
    white1.breakdance();

    yellow1.photosynthesis();
    yellow1.smile();

    blue1.photosynthesis();
    blue1.crye();

    return 0;
}
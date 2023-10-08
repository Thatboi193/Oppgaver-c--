#include <iostream>

using namespace std;

int main() {

    string mult_array[3][3] = {{"FPS", "Cod ww2", "Overwatch,"}, {"Top Down", "Baldur's gate 3", "Helltaker"}, {"3'rd Person", "Horizon Zero Dawn", "Red Dead Redemption 2"}};


    for (int i = 0; i < 3; i++)
    {
        cout << mult_array[0][i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << mult_array[1][i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << mult_array[2][i] << endl;
    }
    cout << endl;


    system("pause");
    return 0;
}

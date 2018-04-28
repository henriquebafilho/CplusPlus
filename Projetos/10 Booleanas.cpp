#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    bool b = true;
    bool b2 = (1 == 1);

    cout << "O valor contido em b eh: " << b << endl;
    cout << "O valor contido em b2 eh: " << b2 << endl;

    //True representa o valor 1
    //False representa o valor 0

    bool c = 0; //false
    bool c2 = 1; // true

    cout << "O valor eh: " << (c2 == true) << endl;//true ------> 1
    cout << "O valor eh: " << (c2 == false) << endl;//false ------> 0

    system("pause");
    return 0;
}

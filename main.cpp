#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    double precos[10] = {1, 2, 3};

    precos[0] = 14.55;
    precos[2] = 9.68;
    precos[3] = 1.1;
    precos[7] = 2;

    for(int i = 0; i <= 9; i++)
    {
        //precos[i] = 0;
        cout << precos[i] << endl;
    }

    system("pause");
    return 0;
}

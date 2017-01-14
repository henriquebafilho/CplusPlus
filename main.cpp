#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    double val[5];
    //1) Entrada de valores (5 numeros)
    for(int i = 0; i <= 4; i++)
    {
        cout << "Informe o " << i+1 << " valor. " << endl;
        cin >> val[i];
    }

    double total = 0;
    //2) Calcular a media
    for(int i2 = 0; i2 <= 4; i2++)
    {
        total += val[i2];
    }

    cout << fixed;
    cout << "A media eh: " << (total / 5) << endl;

    system("pause");
    return 0;
}

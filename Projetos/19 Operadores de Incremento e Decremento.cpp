#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    //Incremento ----> x++ = (x = x + 1)
    //Decremento ----> x-- = (x = x - 1)

    cout << "Operador de incremento" << endl;
    cout << endl;
    int i = 0, i2 = 0;
    cout << "Pre " << ++i << endl;//pre-incrementar
    cout << "Pos " << i2++ << endl;//pos-incrementar
    cout << "Pos " << i2 << endl;

    cout << endl;

    cout << "Operador de decremento" << endl;
    cout << endl;
    i = 0;
    i2 = 0;
    cout << "Pre " << --i << endl;//pre-decrementar
    cout << "Pos " << i2-- << endl;//pos-decrementar
    cout << "Pos " << i2 << endl;

    system("pause");
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    //obj cin
    //obj cout

    //O campo possui 1000 caracteres
    cout << "Estudando a entrada e saída de dados" << endl;
    /*cout << setw(10) << 1 << endl;
    cout << setw(10) << 2 << endl;
    cout << setw(10) << 3 << endl;
    cout << setw(10) << 4 << endl; */

    cout << setw(10) << 1;
    cout << setw(10) << 2;
    cout << setw(10) << 3;
    cout << setw(10) << 4 << endl;

    //HEXADECIMAL
    cout << "Estudando a entrada e saída de dados" << endl;
    cout << hex << 10 + 50 << endl;

    system("pause");
    return 0;
}

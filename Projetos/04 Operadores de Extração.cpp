#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    //OPERADOR DE EXTRAÇÃO
    cout << "Informe um numero: " << endl;

    int num1 = 0;
    cin >> num1;

    cout << "Informe outro numero: " << endl;
    int num2 = 0;
    cin >> num2;

    cout << "Os numeros digitados foram: "
            << num1
            << " e "
            << num2
            << endl;

    return 0;
}

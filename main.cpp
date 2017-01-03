#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    bool continuar = true;

    while (continuar)
    {
        cout << "Digite um numero qualquer: " << endl;
        int valor = 0;
        cin >> valor;

        if(valor > 50)
        {
            cout << "O valor digitado eh maior que 50" << endl;
        }
        /*if(valor == 50)
        {
            cout << "O valor digitado eh igual a 50" << endl;
        } */
        else
        {
            cout << "O valor digitado eh menor que 50" << endl;
        }
    }
    system("pause");
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Digite um numero no intervalo de 45 ate 72" << endl;
    int i = 0;
    cin >> i;

    if(i >= 45 && i <=72)
    {
        cout << "Obrigado por informar um numero no intervalo solicitado" << endl;
        if(i == 45 || i == 72)
        {
            cout << "O valor de i eh igual ao valor de algum extremo" << endl;
        }
    }
    else
    {
        cout << "O numero digitado nao esta no intervalo solicitado" << endl;
    }

    system("pause");
    return 0;
}

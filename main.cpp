#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    double num;
    double total;
    char operacao;

    num = 0;
    total = 0;
    operacao = '+';

    while(operacao != '=')
    {
    //OPERADOR DE EXTRAÇÃO
    cout << "Informe um numero: " << endl;
    cin >> num;

        switch(operacao)
        {
            case 1 :
                operacao = '+';
                total = total + num;
                break;
            case 2 :
                operacao = '-';
                total = total - num;
                break;
            case 3 :
                operacao = '*';
                total = total * num;
                break;
            case 4 :
                operacao = '/';
                total = total / num;
                break;
        }
     cout << "Informe a operacao: " << endl;
     cin >> operacao;
    }
    cout << "O resultado eh: " << total << endl;
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Insira um numero correspondente ao mes desejado: " << endl;

    int num = 0;
    cin >> num;

    string mes = (num == 1) ? "Janeiro":
                 (num == 2) ? "Fevereiro":
                 (num == 3) ? "Março":
                 (num == 4) ? "Abril":
                 (num == 5) ? "Maio":
                 (num == 6) ? "Junho":
                 (num == 7) ? "Julho":
                 (num == 8) ? "Agosto":
                 (num == 9) ? "Setembro":
                 (num == 10) ? "Outubro":
                 (num == 11) ? "Novembro":
                 (num == 12) ? "Dezembro":
                 "O valor inserido nao corresponde a nenhum mes do ano";

    cout << mes << endl;
/*    switch(num)
    {
        case 1: cout << "Janeiro" << endl;
        break;
        case 2: cout << "Fevereiro" << endl;
        break;
        case 3: cout << "Março" << endl;
        break;
        case 4: cout << "Abril" << endl;
        break;
        case 5: cout << "Maio" << endl;
        break;
        case 6: cout << "Junho" << endl;
        break;
        case 7: cout << "Julho" << endl;
        break;
        case 8: cout << "Agosto" << endl;
        break;
        case 9: cout << "Setembro" << endl;
        break;
        case 10: cout << "Outubro" << endl;
        break;
        case 11: cout << "Novembro" << endl;
        break;
        case 12: cout << "Dezembro" << endl;
        break;
        default : cout << "O valor inserido nao corresponde a nenhum mes" << endl;
        break;
    }*/
    system("pause");
    return 0;
}

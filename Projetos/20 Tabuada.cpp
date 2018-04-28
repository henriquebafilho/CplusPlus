#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    //Perguntar qual tabuada para o usuário
    cout << "Insira o numero que voce deseja ver os multiplos: " << endl;
    int n = 0;
    cin >> n;

    //Implementar for
    for(int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }

    //Imprimir a tabuada
    system("pause");
    return 0;
}

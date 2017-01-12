#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Digite um numero: " << endl;
    int i = 0;
    cin >> i;

    string texto = (i <= 10) ? "menor que 10" : "maior que 10";

    cout << "O numero inserido eh " << texto << endl;

    system("pause");
    return 0;
}

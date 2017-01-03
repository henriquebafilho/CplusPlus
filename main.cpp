#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int i = 5 , i2 = 10;

    cout << "Se i for igual a i2, entao, a frase a seguir sera impressa." << endl;
    //i << é igual a >> i2
    if (i == i2)
        cout << "A variavel i eh igual a i2" << endl;

    cout << "i eh diferente de i2?" << endl;
    //i << é igual a >> i2
    if ((i != i2) == true)
        cout << "Sim, i eh diferente de i2" << endl;

    system("pause");
    return 0;
}

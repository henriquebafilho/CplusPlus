#include <iostream>
using namespace std;
int main()
{
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel varInt eh: " << varInt << endl;
    cout << "O valor da variavel c eh: " << c << endl;
    cout << "O valor da variavel pFlutuante eh: " << pFlutuante << endl;
    cout << endl;
    cout << "Memoria da variavel varInt eh: " << sizeof(varInt) << " bytes" << endl;
    cout << "Memoria da variavel c eh: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da variavel pFlutuante eh: " << sizeof(pFlutuante) << " bytes" << endl;
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, soma, sub, multi, div;

    cout << "Seja bem-vindo ao estudo da nossa primeira calculadora!" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "A soma entre " << num1 << " e " << num2 << " eh: " << num1 + num2 << endl;
    cout << "A subtracao entre " << num1 << " e " << num2 << " eh: " << num1 - num2 << endl;
    cout << "A multi entre " << num1 << " e " << num2 << " eh: " << num1 * num2 << endl;
    cout << "A div entre " << num1 << " e " << num2 << " eh: " << num1 / num2 << endl;

    system("pause");
    return 0;
}

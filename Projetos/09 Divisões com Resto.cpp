#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int a = 5 / 2;
    int num1, num2;
    num1 = 10;
    num2 = 3;

    int div = num1 / num2;
    int resto = num1 % num2;

    cout << "A divisao entre " << num1 << " e " << num2 << " eh igual a " << div << endl;
    cout << "A divisao entre " << num1 << " e " << num2 << " tem resto " << resto << endl;

    cout << "O modulo entre 3 e 2 eh: " << 3 % 2 << endl;
    cout << "O modulo entre 4 e 2 eh: " << 4 % 2 << endl;
    cout << "O modulo entre 5 e 2 eh: " << 5 % 2 << endl;
    cout << "O modulo entre 6 e 2 eh: " << 6 % 2 << endl;

    cout << 10 % 2 << endl;
    cout << 9 % 2 << endl;

    system("pause");
    return 0;
}

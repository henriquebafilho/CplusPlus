#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    x = 3;
    y = 9;

    cout << "O valor de x e y eh: " << x << " e " << y << endl;

    cout << "A soma entre x e y eh: " << x + y << endl;
    cout << "A subtracao entre x e y eh: " << x - y << endl;
    cout << "A multiplicacao entre x e y eh: " << x * y << endl;
    double d = y / (x+1.0);
    cout << "A divisao entre y e x eh: " << d << endl;

    system("pause");
    return 0;
}

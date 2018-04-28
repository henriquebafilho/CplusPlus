#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int nota1, nota2, nota3, nota4, media;

    cout << "Insira a nota do primeiro bimestre: " << endl;
    cin >> nota1;

    cout << "Insira nota do segundo bimestre: " << endl;
    cin >> nota2;

    cout << "Insira a nota do terceiro bimestre: " << endl;
    cin >> nota3;

    cout << "Insira a nota do quarto bimestre: " << endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "A media do aluno no ano eh: " << media << endl;
    if(media >= 7)
        cout << "O aluno foi aprovado." << endl;
    else
        cout << "O aluno foi reprovado." << endl;

    system("pause");
    return 0;
}

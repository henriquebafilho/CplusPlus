#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int minutos;
    int segundos;
    bool resultado = true;
    bool continuar = true;

    while(continuar){
    cout << "Insira o numero de minutos da musica: " << endl;
    cin >> minutos;

    cout << "Insira o numero de segundos da musica: " << endl;
    cin >> segundos;
    if(segundos >= 60)
    {
        resultado = false;
        cout << "Operacao impossivel" << endl;
    }

    if(resultado == true){
            if(minutos >= 8)
            {
                minutos = 8;
                segundos = 0;
            }
        cout << "A musica fara scrobble em: " << minutos / 2 << " minutos e "
        << segundos / 2 << " segundos." << endl;
        }
    }
    system("pause");
    return 0;
}

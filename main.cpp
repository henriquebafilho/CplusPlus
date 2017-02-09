#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(){
    int minutos;
    int segundos;
    bool resultado = true;
    bool continuar = true;
    bool maiorqueoito = false;
    bool minpar;

    while(continuar){
        cout << "Insira o numero de minutos da musica: " << endl;
        cin >> minutos;
        if(minutos % 2 == 0) { minpar = true; }
        else { minpar = false; }

        cout << "Insira o numero de segundos da musica: " << endl;
        cin >> segundos;
        if(segundos >= 60){
            resultado = false;
            cout << "Operacao impossivel" << endl;
        }

        if(resultado == true){
                if(minutos >= 8){
                    cout << " A musica fara scrobble em 4 minutos e 0 segundos." << endl;
                    maiorqueoito = true;
                }
                if(maiorqueoito == false){
                    if(minpar == true){
                        cout << "A musica fara scrobble em " << minutos / 2 << " minutos e " <<
                        segundos / 2 << " segundos." << endl;
                    }
                    if(minpar == false){
                        cout << " A musica fara scrobble em " << minutos / 2 << " minutos e " <<
                        (segundos + 60) / 2 << " segundos." << endl;
                    }
                }
            }
    }
    system("pause");
    return 0;
}

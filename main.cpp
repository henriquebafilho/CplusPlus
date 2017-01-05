#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
   char c;
   cout << "Por favor digite uma letra entre A e F: " << endl;
   cin >> c;

   switch(c)
   {
       case 'a':
       case 'A':
        cout << "Voce digitou a letra 'a' ou 'A'. " << endl;
        break;

       case 'b':
       case 'B':
        cout << "Voce digitou a letra 'b' ou 'B'. " << endl;
        break;

        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'e':
        case 'E':
            cout << "Voce digitou a letra 'c', 'C', 'd', 'D', 'e' ou 'E'. " << endl;
            break;

        case 'f':
        case 'F':
        cout << "Voce digitou a letra 'f' ou 'F'. " << endl;
        break;

        default: cout << "O valor digitado nao corresponde a nenhuma letra entre A e G. " << endl;
        break;
   }

    system("pause");
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    //Imprimindo numeros de 0 a 99
   int num = 0;

   while(num < 100)
   {
       cout << num << endl;
       num++;
   }
    cout << endl;

   //Imprimindo numeros de 99 a 0
   int num2 = 100;

   while(num2 > 0)
   {
       cout << num2 << endl;
       num2--;
   }

    system("pause");
    return 0;
}

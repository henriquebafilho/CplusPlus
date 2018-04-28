#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
   int num = 0;
   bool continuar = true;

   while(continuar)
   {
       cout << "Insira um numero qualquer para saber se eh impar ou par: " << endl;
       cin >> num;

       while(num != 0 && num != 1)
       {
           num -=2;
       }
       if(num == 1)
       {
           cout << "o numero digitado eh impar" << endl;
       }
       else if(num == 0)
       {
           cout << "o numero digitado eh par" << endl;
       }
   }
    system("pause");
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
   double num1;
   double num2;
   double num3;
   double total;

   cout << "Insira o primeiro valor: ";
   cin >> num1;

   cout << num1 << " esta para ";
   cin >> num2;

   cout << " assim como ";
   cin >> num3;

   cout << num3 << " esta para x. " << endl;

   total = num3 * num2 / num1;
   cout << "x = " << total << endl;

    system("pause");
    return 0;
}

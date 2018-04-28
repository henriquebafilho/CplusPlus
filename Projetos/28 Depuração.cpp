#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Digite um numero entre 1 e 3" << endl;
    int num = 0;
    cin >> num;

    if(num == 1){
        for(int i = 0; i < 5; i++)
        {
            cout << "A variavel da instrucao FOR eh " << i << endl;
        }
    }
    else
    {
        if(num == 2)
        {
            int i2 = 0;
            while(i2 < 5)
            {
                i2++;
                cout << "O valor da variavel WHILE eh " << i2 << endl;
            }
        }
        else
        {
            if(num == 3)
            {
                int i3 = 0;
                do
                {
                    i3++;
                    cout << "O valor da variavel DOWHILE eh " << i3 << endl;
                }
                while(i3 < 5);
            }
        }
    }

    system("pause");
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int a = 0; //4 bytes
    short int b = 0; //2 bytes
    long int c = 0; //4 bytes

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2 = -10;

    char caractere = 200;
    unsigned char caractere2 = 200;

    cout << sizeof(a) << " - " << a2 << endl;
    cout << sizeof(b) << " - " << b2 << endl;
    cout << sizeof(c) << " - " << c2 << endl;

    return 0;
}

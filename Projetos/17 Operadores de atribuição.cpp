#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    int x = 20;
    x = x * 10;
    x *= 10;

    x = x + 10;
    x += 10;

    x = x / 10;
    x /= 10;

    x = x - 10;
    x -= 10;

    x = x % 10;
    x %= 10;
    //Ambas operações geram o mesmo valor

    system("pause");
    return 0;
}

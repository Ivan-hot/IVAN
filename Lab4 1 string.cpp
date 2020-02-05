#include <iostream>

#include <string.h>
using namespace std;

int main()
{
    //setlocale(LC_ALL, "RUSSIAN");

    char str[] = "mianiko so jescho kukumber";

    char * pch = strrchr(str,'b');

    cout << "Last insertable symbol 'b' - " << (pch - str + 1) << " position n";


    return 0;
}

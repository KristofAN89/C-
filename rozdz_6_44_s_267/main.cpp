#include <iostream>


using namespace std;

#include "sub.h"

int liczba1 = 4;
double przecinek1 = 3.14;
char litera1 = 'a';

int main()
{
    cout << "Begin" << endl;
    cout << "Wartosci zmiennych przed wywolaniem funkcji" << endl;
    cout << liczba << endl;
    cout << przecinek <<  endl;
    cout << litera << endl;

    fun_2();

    cout << "End";
}

/*******************************************************************/
void fun_2()
{
    liczba = liczba + 2;
    przecinek = przecinek + 2.13;
    litera = litera + 'd';
    cout << "Wartosci zmiennych po wykonaniu funkcji" << endl;
    cout << liczba << endl;
    cout << przecinek << endl;
    cout << litera << endl;
}
# include <iostream>
# include "sub.h"

using namespace std; 

int liczba = 1;
double przecinek = 6.23;
char litera = 'c';




   


/*******************************************************************/
void fun_1()
{
    cout << "Begin" << endl;
    cout << "Wartosci zmiennych przed wywolaniem funkcji" << endl;
    cout << liczba1 << endl;
    cout << przecinek1 <<  endl;
    cout << litera1 << endl;
    liczba = liczba * 2;
    przecinek = przecinek * 2.13;
    litera = litera + 'x';
    cout << "Wartosci zmiennych po wykonaniu funkcji" << endl;
    cout << liczba1 << endl;
    cout << przecinek1 << endl;
    cout << litera1 << endl;
     fun_1();

    cout << "End";
}
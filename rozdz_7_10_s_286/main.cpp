#include <iostream>
using namespace std;

inline double DZIEL (double a, double b)
{
    double wynik;
    wynik = a/b;
    cout << wynik;
}

int main()
{
    DZIEL(10.3, 5.1);
}
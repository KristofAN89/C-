#include <iostream>
using namespace std;

auto fun_g (int a, double b) -> decltype  (a)
{
    double suma;
    suma = a+b;
    return suma;
    cout << suma;
}

int main()
{
    int liczba1 = 5;
    double liczba2 = 6.3;
    fun_g(liczba1, liczba2);
 
}

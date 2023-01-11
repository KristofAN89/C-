# include <iostream>
using namespace std;
    inline double CZYNNIK(double a,double b) 
    {
        ((a)/((a)+(b)));
    }
int main()
{

    int d = 0;
    while(d<10)
    {
        cout << "Czynnik = " << CZYNNIK(++d, 2.0);
        cout << " , dla d= " << d << endl;
    }
}
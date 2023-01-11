# include <iostream>

using namespace std;

void f()
{
    /*if (i%12==0)
    {
        cout << "Nowy tuzin";
    }*/
}

int main()
{
    int i;
    for (i=0; i<100; i++)
    {
        f();
        if (i%12==0)
        {
             cout << "Nowy tuzin" << endl;
        }
    }
}
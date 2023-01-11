#include <iostream>
using namespace std;
int i,j,k;

void copy(char zrodlo[], char parzyste[], char nieparz[])
{
    bool parzystosc = true;
    for(i=0, j=0, k=0;zrodlo[i];++i)
    {
        (parzystosc?parzyste[j++]:nieparz[k++])=zrodlo[i];
        //if(zrodlo[i]==' ')
        parzystosc=!parzystosc;
    }
}

int main()
{
    char tab1[]{"To jest dlugi string"};
    char tab2[40];
    char tab3[40];
    copy(tab1, tab2, tab3);
    cout<<tab1<<endl;
    cout<<tab2<<endl;
    cout<<tab3;
    
}
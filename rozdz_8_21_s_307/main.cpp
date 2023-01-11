#include <iostream>
using namespace std;

char tab1[100]{"dododo"}; //tablica 100 elementowa zainicjowana stringiem
char tab2[100]{}; //pusta tablica 100 elementowa zapełniona zerami {}
int i, j; // zmienne globalne potrzebne do pętli

void tabcopy(char kopia[], char oryg[]) //funkcja kopiowania co drugiego elementu z jednej tablicy do drugiej
{
    for(i=0, j=0; ;++i) //pętla nieskończona mająca dwa liczniki. Licznik i ma preinkrementację
    {
       if(oryg[i]==0) // sprawdzenie czy w indeksie oryginalnej tabeli znajduje się wartość null
       {
           kopia[j]=0; // jeżeli w indeksie tabeli oryginalnej znajduje się wartość zero to jest ona przypisywana 
           break;      // do tabeli kopiowanej i pętla zostaje przerwana
       }
       if((i%2)==0) //sprawdzenie czy Licznik i - przypisany do indeksów tabeli "oryg" jest parzysty (podzielny przez 2)
       {
           kopia[j++]=oryg[i]; //jeżeli indeks tablicy oryg jest przysty to następuje przypisanie jego zawartości do indeksu
       }                       //tablicy docelowej i postinkrementacja licznika tablicy docelowej
        
    }
}

int main()
{
    tabcopy(tab2, tab1);
    cout << tab1 << endl;
    cout << tab2;
}






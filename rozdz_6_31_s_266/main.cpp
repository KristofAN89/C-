#include <iostream>
using namespace std;
 bool fun_fx (char znak = 'g', double liczba = 12.5 )
     {
         cout << znak << endl;
         cout << liczba << endl;
     }
 
 int main()
 {
     char litera;
      double liczba1;
     fun_fx (litera, liczba1);
     
     return 0;
 }

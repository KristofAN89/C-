#include <iostream>
using namespace std;

constexpr double mile_na_kilometry(double mil)
{
    return (1.609344 * mil);
}


int main()
{
    constexpr double buty_kilometrowe = mile_na_kilometry(7);
    cout << "7-milowe buty to inaczej buty " << buty_kilometrowe << "-kilometrowe" << endl;
    constexpr double dystans_mile = 2614;
    constexpr double dystans_km = mile_na_kilometry(dystans_mile);
    cout << "Odleglosc Paryz - Dakar to " << dystans_km << " kilometrow" << endl;
    
    for (int m = 100; m < 600; m += 200)
    {
        cout << " " << m << " mil odpowiada "
            << mile_na_kilometry(m) << " km." << endl;
            // constexpr double km = mile_na_kilometry(m)  <------- błąd kompilacji
    }
}
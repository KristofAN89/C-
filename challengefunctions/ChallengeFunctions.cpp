// Challenge.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
/*
W aplikacji wykorzystujemy listę liczb całkowitych. Tutaj nalepiej sprawdzi się vector.
Program po uruchomieniu wyświetla menu dla użytkownika:

P - Wyświetla wszystkie liczby jakie są wprowadzone do vectora. Opcja ma rozpoznawać małą i dużą literę.
    Liczby są wyświtlane w nawiasie kwadratowym. Jeżli użytkownik nie wprowadził żadnych liczb to program wyświetla pusty nawias.
A - Pozwala na dodanie kolejnej liczby do zbioru (polecenie "nazwa_vectora.push_back). Po podaniu liczby użytkownik otrzymuje komunikat:
    "x zostało dodane", gdzie zamiast "x" jest wpisana przez niego liczba.
M - Następuje obliczenie średniej wartości wszystkich elementów z listy. W przypadku gdy jest pusta zostaje wyświetlony komunikat: "Nie można policzyć średniej. Brak elementów"
S - WYświetlenie najmniejszego elementu listy. Jeżeli lista jest pusta to zostaje wyświetlony komunikat: "Nie można określić najmniejszego elementu - lista jest pusta".
L - Działa podobnie do "S", tyle że dotyczy największego elemntu w zbiorze. 
Q - Wyjście z programu. Wyświetlenie napisu "Do widzenia" i zakończenie pracy programu.
Dodatkowe funkcje:
- czyszczenie listy (.clear)
- kontrola duplikatów

Budowa aplikacji
Menu z wyborami.
 */

//**************************************************************************************************************************************

#include <iostream>
#include <vector> // Wektor jest potrzebny do tworzenia dynamicznej listy liczb. Tablica odpada z racji potrzeby podania jej rozmiaru w trakcie deklaracji albo wypełniania jej elementami.

using namespace std;

vector<int>numbers_list = {};
int number{};
/*for (size_t i = 0; i < numbers_list.size(); ++i) {
                if (number == numbers_list.at(i))
                    cout << "You have already entererd this number" << endl;
                    cout << "Do you want to enter a duplicate?" << endl;
                    cout << "Y/N" << endl;
                    cin >> answer;*/

int wprowadzanie_liczby(int liczba) {
    numbers_list.push_back(liczba);
    cout << "Number " << liczba << " has been added" << endl;
    return liczba;
}

void PrintNumber();
void DisplayMean();
void SmallestNumber();
void LargestNumber();
void ClearList();
int main()
{
    
    char menu{};
    bool program_on{ true };
    int maksi{};
    int mini{};
    char answer{};
    while (program_on == true) // Żeby działało dodać zmienną bool na true wcześniej i zmiana na false przy wyjściu
    {
        cout << endl;
        cout << "***********************************************" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear your list" << endl;
        cout << "Q - Quit" << endl;
        cout << "***********************************************" << endl;
        cout << "Please select one option from the menu: " << endl;

        cin >> menu;
    
        
        switch (menu)
        {
        case 'P':
        case 'p':
            PrintNumber();
            break;
        case 'A':
        case 'a':
            cout << "Please enter the number you want ot put in: " << endl;
            cin >> number;
            wprowadzanie_liczby(number);
                           
            break;
        case 'M':
        case 'm':
            DisplayMean();
            break;
        case 'S':
        case 's':
           SmallestNumber();
            break;
        case 'L':
        case 'l':
            LargestNumber();
            break;
        case 'C':
        case 'c':
           ClearList();
            break;
        case 'Q':
        case 'q':
            cout << "Exiting program" << endl;
            program_on = false ;
            break;
        default:
            cout << "Please choose correct position from the menu" << endl;
            break;
        }
     
    } 
    return 0;
}

void PrintNumber() {
    if (numbers_list.size() == 0) {
                cout << "The list is empty." << endl;
            }
            else {
                cout << "Printing numbers: " << endl;
                for (size_t i = 0; i < numbers_list.size(); ++i) {
                    cout << numbers_list.at(i) << " ";
                }
            } 
}

void DisplayMean() {
    double mean{};
    cout << "Displaying mean: " << endl;
            for (size_t i = 0; i < numbers_list.size(); ++i) {
                mean += numbers_list.at(i);
            }
            mean = mean / numbers_list.size();
            cout << mean;
}

void SmallestNumber() {
    int mini{};
     cout << "Showing the smallest number: " << endl;
            mini = numbers_list.at(0);
            for (size_t i = 0; i < numbers_list.size(); ++i) {
                if (numbers_list.at(i) < mini)
                    mini = numbers_list.at(i);
            }
            cout << mini;
}

void LargestNumber() {
    int maksi{};
    cout << "Showing the largest number" << endl;
            maksi = numbers_list.at(0);
            for (size_t i = 0; i < numbers_list.size(); ++i) {
                if (numbers_list.at(i) > maksi)
                    maksi = numbers_list.at(i);
            }
            cout << maksi;
}

void ClearList() {
     cout << "Clearing list" << endl;
            numbers_list.clear();
}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln


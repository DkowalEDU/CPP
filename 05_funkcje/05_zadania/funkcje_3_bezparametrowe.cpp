#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
float a, b, pole;
void czytaj_dane() // deklaracja i definicja funkcji czytaj_dane()
{
 cout << "Program oblicza pole prostokata." << endl;
 cout << "Podaj bok a." << endl;
 cin >> a;
 cout << "Podaj bok b." << endl;
 cin >> b;
}
void przetworz_dane() // deklaracja i definicja funkcji przetworz_dane()
{
 pole = a*b;
}
void wyswietl_wynik() // deklaracja i definicja funkcji wyswietl_wynik()
{
 cout << fixed << setprecision(2);
 cout << "Pole prostokąta o boku a = " << a << " i boku b = " << b;
 cout << " wynosi " << pole << "." << endl;
}
int main()
{
 czytaj_dane(); // wywołanie funkcji czytaj_dane()
 przetworz_dane(); // wywołanie funkcji przetworz_dane()
 wyswietl_wynik(); // wywołanie funkcji wyswietl_wynik()
 _getch(); // naciśnij klawisz Enter
 return 0;
}
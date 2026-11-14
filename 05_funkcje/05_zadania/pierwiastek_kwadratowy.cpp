#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
float a, b, c, delta, x1, x2;
char liczba_pierwiastkow;
void czytaj_dane()
{
 cout << "Program oblicza pierwiastki równania kwadratowego" << endl;
 cout << "dla dowolnych współczynników a, b, c." << endl;
 cout << "Podaj a." << endl;
 cin >> a;
 if (a == 0)
 {
 cout << "Niedozwolona wartość współczynnika a. Naciśnij klawisz Enter." << endl;
 _getch(); // naciśnij klawisz Enter
 exit(1); // wyjście z programu
 }
 else
 {
 cout << "Podaj b." << endl;
 cin >> b;
 cout << "Podaj c." << endl;
 cin >> c;
 }
}
void przetworz_dane()
{
 delta = b*b - 4*a*c;
 if (delta < 0) liczba_pierwiastkow = 0;
 if (delta == 0) liczba_pierwiastkow = 1;
 if (delta > 0) liczba_pierwiastkow = 2;

switch (liczba_pierwiastkow)
 {
 case 1: x1 = -b/(2*a);
 break;
 case 2: {
 x1 = (-b-sqrt(delta))/(2*a);
 x2 = (-b+sqrt(delta))/(2*a);
 }
 break;
 }
}
void wyswietl_wynik()
{
 cout << "Dla wprowadzonych liczb:" << endl;
 cout << "a = " << a << "," << endl;
 cout << "b = " << b << "," << endl;
 cout << "c = " << c << endl;
 switch (liczba_pierwiastkow)
 {
 case 0 : cout << "brak pierwiastków rzeczywistych." << endl;
 break;
 case 1: cout << "trójmian ma jeden pierwiastek podwójny x1 = " << x1 << "." << endl;
 break;
 case 2: { cout << "trójmian ma dwa pierwiastki:" << endl;
 cout << "x1 = " << x1 << "," << endl;
 cout << "x2 = " << x2 << "." << endl;
 }
 break;
 }
}
int main()
{
 cout << fixed << setprecision(2);
 czytaj_dane();
 przetworz_dane();
 wyswietl_wynik();
 _getch(); // naciśnij klawisz Enter
 return 0;
}
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
float a, b, pole;
void pole_prostokata(float x, float y) // deklaracja i definicja funkcji
{
 pole = x*y;
 cout << fixed << setprecision(2);
 cout << "Pole prostokąta o boku a = " << x << " i boku b = " << y;
 cout << " wynosi " << pole << "." << endl;
}
int main()
{
 cout << "Program oblicza pole prostokąta. " << endl;
 cout << "Podaj bok a." << endl;
 cin >> a;
 cout << "Podaj bok b." << endl;
 cin >> b;
 pole_prostokata(a, b); // wywołanie funkcji
 _getch(); // naciśnij klawisz Enter
 return 0;
}
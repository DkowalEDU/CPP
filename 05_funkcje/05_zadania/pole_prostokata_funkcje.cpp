#include <iostream>

using namespace std;
void pole_prostokata() // deklaracja i definicja funkcji pole_prostokata()
{
 float a, b, pole;
 cout << "Program oblicza pole prostokąta. " << endl;
 cout << "Podaj bok a." << endl;
 cin >> a;
 cout << "Podaj bok b." << endl;
 cin >> b;
 pole = a*b;
 cout << fixed << setprecision(2);
 cout << "Pole prostokąta o boku a = " << a << " i boku b = " << b;
 cout << " wynosi " << pole << "." << endl;
}
int main()
{
 pole_prostokata(); // wywołanie funkcji pole_protokata()

 return 0;
}
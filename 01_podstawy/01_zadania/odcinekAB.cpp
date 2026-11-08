#include <iostream>
#include <cmath> // Dołączamy bibliotekę matematyczną

using namespace std;

int main() {
    // 1. Używamy 'double' dla liczb z ułamkami
    double x1, y1, x2, y2;

    cout << "Kalkulator Geometrii Analitycznej - Odcinek AB\n";
    cout << "----------------------------------------------\n";

    // 2. Pobieramy dane. Zauważcie, że cin może pobrać dwie zmienne naraz!
    cout << "Podaj wspolrzedne punktu A (x1 y1) oddzielone spacja: ";
    cin >> x1 >> y1;

    cout << "Podaj wspolrzedne punktu B (x2 y2) oddzielone spacja: ";
    cin >> x2 >> y2;

    // 3. Obliczenia (tłumaczymy wzór matematyczny na kod C++)

    // a) Wartość bezwzględna z różnicy: |x2 - x1|
    // Odległość to zawsze wartość dodatnia, 'abs' chroni nas przed wynikiem na minusie.
    double odleglosc_x = abs(x2 - x1);

    // b) Długość odcinka (Potęgowanie i Pierwiastkowanie w jednym!)
    // Tłumaczymy wzór: sqrt( (x2-x1)^2 + (y2-y1)^2 )
    double nawias1 = pow(x2 - x1, 2); // (x2 - x1) podniesione do potęgi 2
    double nawias2 = pow(y2 - y1, 2); // (y2 - y1) podniesione do potęgi 2

    double dlugosc_ab = sqrt(nawias1 + nawias2); // Pierwiastek z całości

    // 4. Wypisanie wyników
    cout << "\n--- WYNIKI ---\n";
    cout << "Odleglosc punktow w poziomie (tylko na osi X): " << odleglosc_x << "\n";
    cout << "Calkowita dlugosc odcinka AB wynosi: " << dlugosc_ab << "\n";

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int liczba;
    bool czyPierwsza = true;

    cout << "Podaj liczbe calkowita wieksza od 1: ";
    cin >> liczba;

    // Sprawdzamy dzielniki od 2 do liczby o 1 mniejszej od badanej
    for (int i = 2; i < liczba; i++) {
        if (liczba % i == 0) {
            czyPierwsza = false; // Znalezlismy dzielnik!
            break; // Nie ma sensu szukac dalej, przerywamy petle
        }
    }

    if (czyPierwsza == true && liczba > 1) {
        cout << liczba << " jest liczba pierwsza." << endl;
    }
    else {
        cout << liczba << " NIE jest liczba pierwsza." << endl;
    }

    return 0;
}
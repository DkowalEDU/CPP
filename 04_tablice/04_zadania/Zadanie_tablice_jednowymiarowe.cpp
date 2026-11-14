#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 6;
    int liczby[ROZMIAR];
    int parzyste = 0;

    cout << "--- WPROWADZANIE DANYCH ---\n";
    for(int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    // Zakładamy, że pierwsza liczba jest najmniejsza
    int min_wartosc = liczby[0];

    // Analiza tablicy
    for(int i = 0; i < ROZMIAR; i++) {
        // Sprawdzanie parzystości (reszta z dzielenia przez 2)
        if(liczby[i] % 2 == 0) {
            parzyste++;
        }
        
        // Szukanie minimum
        if(liczby[i] < min_wartosc) {
            min_wartosc = liczby[i];
        }
    }

    cout << "\n--- WYNIKI ---\n";
    cout << "Ilosc liczb parzystych: " << parzyste << endl;
    cout << "Najmniejsza liczba to: " << min_wartosc << endl;

    return 0;
}

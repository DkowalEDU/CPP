#include <iostream>
using namespace std;

int main() {
    // 1. Deklaracja zmiennych - przygotowujemy "pudełka" na liczby
    int a, b;

    // 2. Komunikacja z użytkownikiem i pobieranie danych
    cout << "Podaj pierwsza liczbe (a): ";
    cin >> a;

    cout << "Podaj druga liczbe (b): ";
    cin >> b;

    // 3. Obliczenia i wyświetlanie wyników
    cout << "\n--- WYNIKI OBLICZEN ---\n";
    cout << "Dodawanie (a + b) = " << a + b << "\n";
    cout << "Odejmowanie (a - b) = " << a - b << "\n";
    cout << "Mnozenie (a * b) = " << a * b << "\n";

    // Pamiętajcie o obcinaniu ułamków przy dzieleniu int!
    cout << "Dzielenie (a / b) = " << a / b << "\n";

    // Reszta z dzielenia
    cout << "Modulo (a % b) = " << a % b << "\n";

    return 0; 
}
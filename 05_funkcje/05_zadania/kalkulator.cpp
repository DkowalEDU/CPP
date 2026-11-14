#include <iostream>

using namespace std;

// --- DEKLARACJE I DEFINICJE FUNKCJI ---

// Gotowy przykład: funkcja dodająca dwie liczby
double dodaj(double a, double b) {
    return a + b;
}

// TODO 1: Napisz funkcję 'odejmij', która przyjmuje dwa parametry (double) i zwraca ich różnicę.

// TODO 2: Napisz funkcję 'pomnoz', która przyjmuje dwa parametry (double) i zwraca ich iloczyn.

// TODO 3: Napisz funkcję 'podziel', która przyjmuje dwa parametry (double) i zwraca ich iloraz.
// UWAGA: Pamiętaj, że nie można dzielić przez zero! 
// Przed wykonaniem dzielenia sprawdź warunkiem (if), czy drugi parametr jest różny od 0. 
// Jeśli jest 0, wyświetl komunikat o błędzie i zwróć np. 0.


int main() {
    double liczba1, liczba2;
    int wybor;

    cout << "=== KALKULATOR WARSZTATOWY ===" << endl;
    
    // TODO 4: Poproś użytkownika o podanie pierwszej i drugiej liczby, 
    // a następnie zapisz je do zmiennych liczba1 oraz liczba2 używając 'cin'.


    cout << "\nWybierz operacje do wykonania:" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    // TODO 5: Wypisz na ekranie opcje '3' dla mnożenia i '4' dla dzielenia.
    
    cout << "Twoj wybor: ";
    cin >> wybor;

    cout << "\n--- WYNIK ---" << endl;

    switch(wybor) {
        case 1:
            cout << "Suma: " << dodaj(liczba1, liczba2) << endl;
            break;
        case 2:
            // TODO 6: Wywołaj odpowiednią funkcję dla odejmowania i wypisz wynik.
            break;
        // TODO 7: Dodaj sekcje 'case 3:' dla mnożenia oraz 'case 4:' dla dzielenia.
        default:
            cout << "Nieprawidlowa operacja!" << endl;
    }

    return 0;
}
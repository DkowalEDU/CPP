#include <iostream>
#include <string>
using namespace std;

// =========================================================================
// WZÓR 1: Funkcja bez parametrów
// Nie przyjmuje żadnych danych (puste nawiasy). 
// Wykonuje zawsze dokładnie to samo zadanie.
// =========================================================================
void wyswietlLogo() {
    cout << "=== AUTOMAT Z NAPOJAMI 3000 ===" << endl;
    cout << "-------------------------------" << endl;
}

// =========================================================================
// WZÓR 2: Funkcja z parametrem
// Przyjmuje dane wejściowe. Jej zachowanie zależy od przekazanego argumentu.
// =========================================================================
void wyswietlCene(double cena) {
    cout << "Do zaplaty: " << cena << " PLN" << endl;
}

// =========================================================================
// KROK 1: Funkcja bez parametrów
// Zadeklaruj funkcję wyswietlMenu().
// 1. Typ zwracany: void
// 2. Parametry: brak (puste nawiasy)
// 3. Zadanie: funkcja ma wypisać na ekranie 7 dostępnych napojów wraz z 
//    wymysloną przez Ciebie ceną, np.:
//    "1. Kawa czarna - 5.00 PLN"
//    "2. Kawa z mlekiem - 6.50 PLN"
//    ...aż do 7.
// =========================================================================

// TODO: Tutaj napisz funkcję wyswietlMenu()



// =========================================================================
// KROK 2: Funkcja zwracająca wartość na podstawie parametru
// Zadeklaruj funkcję ustalCene().
// 1. Typ zwracany: double
// 2. Parametry: numerNapoju (typ int)
// 3. Zadanie: użyj instrukcji switch. Dla każdego przypadku (case 1-7) 
//    zwróć (return) inną cenę zgodną z tym, co wypisuje menu z Kroku 1.
//    W sekcji 'default' zwróć wartość 0.0 (oznaczającą błąd).
// =========================================================================

// TODO: Tutaj napisz funkcję ustalCene()



// =========================================================================
// KROK 3: Funkcja wykonująca akcję na podstawie parametru
// Zadeklaruj funkcję przygotujNapoj().
// 1. Typ zwracany: void
// 2. Parametry: numerNapoju (typ int)
// 3. Zadanie: użyj instrukcji switch.
//    - Zależnie od podanego numeru (1-7), wypisz komunikat, np. 
//      "Przygotowuje: Cappuccino..."
//    - W sekcji 'default' wypisz "Blad: Nieznany napoj!"
// =========================================================================

// TODO: Tutaj napisz funkcję przygotujNapoj()



// =========================================================================
// KROK 4: Funkcja z parametrami zwracająca wynik
// Zadeklaruj funkcję obliczReszte().
// 1. Typ zwracany: double
// 2. Parametry: wplata (double), koszt (double)
// 3. Zadanie: zwróć różnicę między wpłatą a kosztem (wplata - koszt).
// =========================================================================

// TODO: Tutaj napisz funkcję obliczReszte()



int main() {
    int wyborUzytkownika; 
    double cenaKoncowa = 0.0; 
    double gotowka = 20.00; // Zakładamy, że klient wrzucił 20 PLN

    // Wywołanie gotowej funkcji wzorcowej
    wyswietlLogo();
    
    // =========================================================================
    // TEST KROKU 1
    // Po napisaniu funkcji wyswietlMenu(), odkomentuj poniższe linie, 
    // aby wyświetlić menu i pozwolić użytkownikowi na wybór.
    // =========================================================================
    /*
    wyswietlMenu();
    cout << "\nWybierz numer napoju (1-7): ";
    cin >> wyborUzytkownika;
    */

    // =========================================================================
    // TEST KROKU 2
    // Odkomentuj poniższe linie. Sprawdzamy, jaką cenę zwróci Twoja funkcja.
    // Jeśli zwróci 0.0 (zły numer), program przerwie działanie instrukcją return 0.
    // =========================================================================
    /*
    cenaKoncowa = ustalCene(wyborUzytkownika);
    if (cenaKoncowa == 0.0) {
        cout << "Wybrano niepoprawny numer. Koniec pracy automatu." << endl;
        return 0; 
    }
    wyswietlCene(cenaKoncowa);
    */

    // =========================================================================
    // TEST KROKU 3
    // Odkomentuj wywołanie funkcji przygotowującej napój.
    // =========================================================================
    /*
    przygotujNapoj(wyborUzytkownika);
    */

    // =========================================================================
    // TEST KROKU 4
    // Odkomentuj poniższe linie, aby sprawdzić obliczanie reszty.
    // =========================================================================
    /*
    double reszta = obliczReszte(gotowka, cenaKoncowa);
    cout << "Wplacono: " << gotowka << " PLN. Reszta dla Ciebie: " << reszta << " PLN" << endl;
    */

    return 0;
}
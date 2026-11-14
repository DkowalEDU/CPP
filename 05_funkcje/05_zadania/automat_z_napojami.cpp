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
// 3. Zadanie: funkcja ma wypisać na ekranie dwie linijki:
//    "1. Kawa czarna"
//    "2. Kawa z mlekiem"
// =========================================================================

// TODO: Tutaj napisz funkcję wyswietlMenu()



// =========================================================================
// KROK 2: Funkcja z parametrami 
// Zadeklaruj funkcję przygotujNapoj().
// 1. Typ zwracany: void
// 2. Parametry: numerNapoju (typ int)
// 3. Zadanie: użyj instrukcji warunkowej (if/else lub switch).
//    - Jeśli numerNapoju to 1, wypisz "Przygotowuje: Kawa czarna..."
//    - Jeśli numerNapoju to 2, wypisz "Przygotowuje: Kawa z mlekiem..."
//    - W przeciwnym razie wypisz "Blad: Nieznany napoj!"
// =========================================================================

// TODO: Tutaj napisz funkcję przygotujNapoj()



// =========================================================================
// KROK 3: Funkcja z parametrami zwracająca wynik
// Zadeklaruj funkcję obliczReszte().
// 1. Typ zwracany: double
// 2. Parametry: wplata (double), koszt (double)
// 3. Zadanie: zwróć różnicę między wpłatą a kosztem (wplata - koszt).
// =========================================================================

// TODO: Tutaj napisz funkcję obliczReszte()



int main() {
    int wyborUzytkownika = 2;
    double cenaNapoju = 5.50;
    double gotowka = 10.00;

    // Przykładowe wywołanie funkcji wzorcowych
    wyswietlLogo();
    
    // =========================================================================
    // TEST KROKU 1
    // Odkomentuj poniższą linię, aby wyświetlić menu.
    // Ponieważ funkcja nie ma parametrów, wywołujemy ją z pustymi nawiasami.
    // =========================================================================
    /*
    wyswietlMenu();
    */

    // =========================================================================
    // TEST KROKU 2
    // Odkomentuj poniższe linie. 
    // Przekazujemy zmienną 'wyborUzytkownika' oraz 'cenaNapoju' jako parametry.
    // Zmień wartość 'wyborUzytkownika' na początku funkcji main na 1 lub 3, 
    // aby zobaczyć, jak funkcja reaguje na różne dane wejściowe.
    // =========================================================================
    /*
    cout << "\nWybrano pozycje nr: " << wyborUzytkownika << endl;
    wyswietlCene(cenaNapoju);
    przygotujNapoj(wyborUzytkownika);
    */

    // =========================================================================
    // TEST KROKU 3
    // Odkomentuj poniższe linie, aby sprawdzić obliczanie reszty.
    // Przekazujemy dwa argumenty do funkcji, a wynik zapisujemy do zmiennej.
    // =========================================================================
    /*
    double reszta = obliczReszte(gotowka, cenaNapoju);
    cout << "Wplacono: " << gotowka << " PLN. Reszta dla Ciebie: " << reszta << " PLN" << endl;
    */

    return 0;
}
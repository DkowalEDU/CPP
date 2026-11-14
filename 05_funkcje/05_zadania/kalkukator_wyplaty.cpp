#include <iostream>
using namespace std;

// 1. Funkcja pobierająca godziny pracy do tablicy (typ void, modyfikuje tablicę w miejscu)
void pobierzGodziny(int tablica[], int dni) {
    cout << "Wprowadz liczbe przepracowanych godzin dla " << dni << " dni roboczych:" << endl;
    
    // TODO: Napisz pętle for, która wykona się tyle razy, ile wynosi zmienna 'dni'.
    // Wewnątrz pętli poproś użytkownika o podanie godzin (cin >> tablica[i]).
    
}

// 2. Funkcja obliczająca łączny czas pracy
int obliczSumeGodzin(int tablica[], int dni) {
    int suma = 0;
    
    // TODO: Napisz pętlę for sumującą wszystkie elementy tablicy.
    // Przypisz wynik do zmiennej 'suma'.
    
    return suma; // Zwracamy gotowy wynik
}

// 3. TODO: Tutaj zadeklaruj i zdefiniuj funkcję obliczWyplate()
// Pamiętaj o dodaniu premii 150 zł za przepracowanie powyżej 40 godzin (użyj instrukcji if).




int main() {
    // Stała określająca liczbę dni roboczych
    const int LICZBA_DNI = 5;
    
    // Tablica przechowująca godziny z poszczególnych dni
    int godzinyWtygodniu[LICZBA_DNI];
    
    // Stawka godzinowa
    double stawka;

    cout << "--- SYSTEM ROZLICZEN PRACOWNIKOW ---" << endl;
    
    // KROK 1: Pobranie stawki godzinowej
    cout << "Podaj stawke godzinowa pracownika (PLN): ";
    cin >> stawka;
    cout << endl;

    // KROK 2: Wywołanie funkcji pobierającej godziny
    // TODO: Odkomentuj poniższą linię, gdy napiszesz funkcję pobierzGodziny
    // pobierzGodziny(godzinyWtygodniu, LICZBA_DNI);

    // KROK 3: Wywołanie funkcji sumującej i zapisanie wyniku do zmiennej
    int sumaGodzin = 0; // TODO: Zastąp 0 wywołaniem funkcji obliczSumeGodzin()

    // KROK 4: Obliczenie wypłaty
    double wyplata = 0; // TODO: Zastąp 0 wywołaniem swojej nowej funkcji obliczWyplate()

    // Wyświetlenie podsumowania
    cout << "\n--- PODSUMOWANIE ---" << endl;
    cout << "Calkowity czas pracy: " << sumaGodzin << " godzin." << endl;
    cout << "Nalezna wyplata: " << wyplata << " PLN." << endl;

    return 0;
}
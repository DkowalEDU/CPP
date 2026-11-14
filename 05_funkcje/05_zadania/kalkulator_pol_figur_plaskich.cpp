#include <iostream>
using namespace std;

// =========================================================================
// KROK 1: Pole prostokąta
// Zadeklaruj funkcję poleProstokata().
// 1. Typ zwracany: double
// 2. Parametry: a (double), b (double)
// 3. Zadanie: Zwróć wynik mnożenia a * b.
// =========================================================================

// TODO: Tutaj napisz funkcję poleProstokata()



// =========================================================================
// KROK 2: Pole trójkąta
// Zadeklaruj funkcję poleTrojkata().
// 1. Typ zwracany: double
// 2. Parametry: podstawa (double), wysokosc (double)
// 3. Zadanie: Zwróć wynik wzoru: (podstawa * wysokosc) / 2.0
// =========================================================================

// TODO: Tutaj napisz funkcję poleTrojkata()



// =========================================================================
// KROK 3: Pole koła
// Zadeklaruj funkcję poleKola().
// 1. Typ zwracany: double
// 2. Parametry: promien (double)
// 3. Zadanie: Zwróć wynik wzoru: 3.14 * promien * promien
// =========================================================================

// TODO: Tutaj napisz funkcję poleKola()



int main() {
    int wybor;
    double wartosc1, wartosc2;

    cout << "--- KALKULATOR POL FIGUR PLASKICH ---" << endl;
    cout << "1. Prostokat" << endl;
    cout << "2. Trojkat" << endl;
    cout << "3. Kolo" << endl;
    cout << "Wybierz figure (1-3): ";
    cin >> wybor;

    cout << endl;

    // Obsługa wyboru użytkownika
    switch (wybor) {
        case 1:
            cout << "Podaj dlugosc boku a: "; 
            cin >> wartosc1;
            cout << "Podaj dlugosc boku b: "; 
            cin >> wartosc2;
            
            // TODO: Odkomentuj poniższą linię po wykonaniu KROKU 1
            /*
            cout << "Pole prostokata wynosi: " << poleProstokata(wartosc1, wartosc2) << endl;
            */
            break;
            
        case 2:
            cout << "Podaj dlugosc podstawy: "; 
            cin >> wartosc1;
            cout << "Podaj wysokosc: "; 
            cin >> wartosc2;
            
            // TODO: Odkomentuj poniższą linię po wykonaniu KROKU 2
            /*
            cout << "Pole trojkata wynosi: " << poleTrojkata(wartosc1, wartosc2) << endl;
            */
            break;
            
        case 3:
            cout << "Podaj promien kola: "; 
            cin >> wartosc1;
            
            // TODO: Odkomentuj poniższą linię po wykonaniu KROKU 3
            /*
            cout << "Pole kola wynosi: " << poleKola(wartosc1) << endl;
            */
            break;
            
        default:
            cout << "Niepoprawny wybor! Uruchom program ponownie." << endl;
            break;
    }

    return 0;
}
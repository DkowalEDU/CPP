#include <iostream>

using namespace std;

int main() {
    int wybor;

    // 1. Wyswietlenie menu
    cout << "=== MENU GLOWNE ===" << endl;
    cout << "1. Nowa gra" << endl;
    cout << "2. Wczytaj gre" << endl;
    cout << "3. Opcje" << endl;
    cout << "4. Wyjscie" << endl;
    cout << "===================" << endl;
    
    // 2. Wczytanie wyboru
    cout << "Wybierz opcje (1-4): ";
    cin >> wybor;

    // 3. Obsluga wyboru
    switch (wybor) {
        case 1:
            cout << "Generowanie nowego swiata... Powodzenia!" << endl;
            break;
        case 2:
            cout << "Wczytywanie ostatniego zapisu..." << endl;
            break;
        case 3:
            cout << "Otwieram panel ustawien grafiki i dzwieku." << endl;
            break;
        case 4:
            cout << "Zamykanie gry. Do zobaczenia wrotce!" << endl;
            break;
        default:
            cout << "Blad! Wybrano niepoprawna opcje z menu." << endl;
            break;
    }

    return 0;
}
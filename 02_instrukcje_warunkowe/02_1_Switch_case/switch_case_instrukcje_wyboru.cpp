#include <iostream>

using namespace std;

int main() {
    int dzien;
    cout << "Podaj numer dnia tygodnia (1-7): ";
    cin >> dzien;

    switch (dzien) {
        case 1:
            cout << "Poniedzialek" << endl;
            break; // Zatrzymuje switch, wychodzi z bloku
        case 2:
            cout << "Wtorek" << endl;
            break;
        case 3:
            cout << "Sroda" << endl;
            break;
        case 4:
            cout << "Czwartek" << endl;
            break;
        case 5:
            cout << "Piatek" << endl;
            break;
        case 6:
            cout << "Sobota - wreszcie weekend!" << endl;
            break;
        case 7:
            cout << "Niedziela" << endl;
            break;
        default:
            // Uruchomi sie, gdy uzytkownik wpisze np. 8 albo -5
            cout << "Nie ma takiego dnia tygodnia!" << endl;
            break; 
    }

    return 0;
}
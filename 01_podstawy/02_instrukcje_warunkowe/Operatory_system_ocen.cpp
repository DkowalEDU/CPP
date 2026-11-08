#include <iostream>
using namespace std;

int main() {
    int wynik;

    cout << "--- SYSTEM KLASYFIKACJI OCEN ---\n";
    cout << "Podaj swoj wynik z egzaminu w procentach (0-100): ";
    cin >> wynik;

    // Najpierw zabezpieczamy się przed tym, żeby nie wpisać wartości poza skalą 0-100
    if (wynik > 100 || wynik < 0) {
        cout << "Blad! Wynik musi byc w przedziale od 0 do 100.\n";
    }
    // Jeśli wynik jest poprawny
    else if (wynik == 100) {
        cout << "Ocena: Celujacy (6)\n";
    }
    else if (wynik >= 90) {
        cout << "Ocena: Bardzo dobry (5)\n"; // Obejmuje 90-99%, bo 100% wyłapał warunek wyżej
    }
    else if (wynik >= 76) {
        cout << "Ocena: Dobra (4)\n"; // Obejmuje 76-89%
    }
    else if (wynik >= 63) {
        cout << "Ocena: Dostateczny (3)\n"; // Obejmuje 63-75%
    }
    else if (wynik >= 50) {
        cout << "Ocena: Dopuszczajacy (2)\n"; // Obejmuje 50-62%
    }
    else {
        // Skoro żaden z powyższych warunków nie został spełniony, 
        // wynik musi być mniejszy niż 50%
        cout << "Ocena: Niedostateczny (1)\n";
    }

    return 0;
}
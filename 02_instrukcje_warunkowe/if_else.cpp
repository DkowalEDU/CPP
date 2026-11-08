#include <iostream>
using namespace std;

int main() {

    int punkty_ucznia = 45;
    int prog_zaliczenia = 50;

    // Program wkracza na skrzyżowanie i zadaje pytanie:
    if (punkty_ucznia >= prog_zaliczenia) {

        // Blok PRAWDA: ten kod uruchomi się, jeśli uczeń zdobył 50+ punktów
        cout << "Test zaliczony! Gratulacje.\n";

    }
    else {

        // Blok FAŁSZ (Plan B): ten kod uruchomi się, gdy warunek nie zostanie spełniony
        cout << "Test oblany. Widzimy sie na poprawce.\n";

    }
}
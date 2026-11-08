#include <iostream>

using namespace std;

int main() {
    int rzut;

    do {
        cout << "Rzucasz koscia. Jaki wynik wypadl? (1-6): ";
        cin >> rzut;

        if (rzut != 6) {
            cout << "To nie szostka. Rzucamy dalej!" << endl;
        }

        // Warunek sprawdzany na samym końcu:
    } while (rzut != 6);

    cout << "Brawo! Wyrzuciles 6, wygrywasz!" << endl;

    return 0;
}
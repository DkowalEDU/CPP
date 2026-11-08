#include <iostream>

using namespace std;

int main() {
    int pin = 0;

    cout << "Podaj PIN: ";
    cin >> pin;

    // Pętla działa DOPÓKI pin jest inny (!=) niż 1234
    while (pin != 1234) {
        cout << "Bledny PIN! Sprobuj ponownie: ";
        cin >> pin;
    }

    cout << "PIN poprawny. Witaj w systemie!" << endl;

    return 0;
}
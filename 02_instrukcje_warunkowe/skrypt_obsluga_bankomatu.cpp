#include <iostream>

using namespace std;

int main() {
    int saldo = 1500;
    int wyplata;

    cout << "Twoje saldo: " << saldo << " PLN." << endl;
    cout << "Podaj kwote do wyplaty: ";
    cin >> wyplata;

    if (wyplata <= 0) {
        cout << "Blad: Kwota musi byc wieksza od zera!" << endl;
    } else if (wyplata > saldo) {
        cout << "Blad: Brak wystarczajacych srodkow na koncie." << endl;
    } else if (wyplata % 10 != 0) {
        cout << "Blad: Bankomat wydaje tylko banknoty o nominale 10, 20, 50, 100 i 200 PLN." << endl;
    } else {
        saldo = saldo - wyplata;
        cout << "Transakcja zaakceptowana. Wyplacono: " << wyplata << " PLN." << endl;
        cout << "Pozostale saldo: " << saldo << " PLN." << endl;
    }

    return 0;
}
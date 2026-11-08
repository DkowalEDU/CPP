#include <iostream>

using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba >= 10 && liczba <= 100) {
        cout << "Liczba miesci sie w przedziale!" << endl;
    } else {
        cout << "Liczba jest poza przedzialem." << endl;
    }

    return 0;
}
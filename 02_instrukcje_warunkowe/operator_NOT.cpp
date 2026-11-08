#include <iostream>

using namespace std;

int main() {
    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;

    // Negujemy warunek "wiek >= 18"
    if (!(wiek >= 18)) {
        cout << "Odmowa dostepu. Nie jestes pelnoletni." << endl;
    } else {
        cout << "Zapraszamy do srodka!" << endl;
    }

    return 0;
}
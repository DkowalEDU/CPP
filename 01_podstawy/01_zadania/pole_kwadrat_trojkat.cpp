#include <iostream>
using namespace std;

int main() {
    cout << "--- KALKULATOR GEOMETRYCZNY ---\n\n";

    // 1. POLE KWADRATU
    double bok;

    cout << "1. KWADRAT\n";
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok;

    // Wzór: P = a * a
    double pole_kwadratu = bok * bok;
    cout << "Pole kwadratu wynosi: " << pole_kwadratu << "\n\n";


    // 2. POLE TRÓJKĄTA
    double podstawa, wysokosc;

    cout << "2. TROJKAT\n";
    cout << "Podaj dlugosc podstawy trojkata: ";
    cin >> podstawa;

    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;

    // Wzór: P = (a * h) / 2
    double pole_trojkata = (podstawa * wysokosc) / 2.0;
    cout << "Pole trojkata wynosi: " << pole_trojkata << "\n";

    return 0;
}
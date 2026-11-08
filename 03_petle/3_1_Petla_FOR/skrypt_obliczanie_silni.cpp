#include <iostream>

using namespace std;

int main() {
    int n;
    long long silnia = 1; // Uzywamy long long, bo silnia rosnie blyskawicznie!

    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> n;

    // Zaczynamy od 1 i mnożymy aż do n
    for (int i = 1; i <= n; i++) {
        silnia = silnia * i;
        cout << silnia << "\n";
    }

    cout << n << "! = " << silnia << endl;

    return 0;
}
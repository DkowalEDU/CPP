#include <iostream>

using namespace std;

int main() {
    int rok;
    cout << "Podaj rok: ";
    cin >> rok;

    if ((rok % 4 == 0 && !(rok % 100 == 0)) || (rok % 400 == 0)) {
        cout << rok << " jest rokiem przestepnym." << endl;
    } else {
        cout << rok << " nie jest rokiem przestepnym." << endl;
    }

    return 0;
}
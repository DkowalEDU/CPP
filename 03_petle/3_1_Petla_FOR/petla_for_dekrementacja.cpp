#include <iostream>

using namespace std;

int main() {
    cout << "Przygotowanie do startu..." << endl;

    // i zaczyna od 10; działa dopóki i jest większe od 0; co krok i maleje o 1
    for (int i = 10; i > 0; i--) {
        cout << i << "..." << endl;
    }

    cout << "START!" << endl;

    return 0;
}
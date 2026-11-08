#include <iostream>

using namespace std;

int main() {
    int wiek;
    cout << "Ile masz lat? ";
    cin >> wiek;

    if (wiek < 18 || wiek > 65) {
        cout << "Przysluguje Ci bilet ulgowy." << endl;
    }
    else {
        cout << "Musisz kupic bilet normalny." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "--- TESTER OPERATOROW RELACYJNYCH ---\n";
    cout << "Podaj pierwsza liczbe (a): ";
    cin >> a;
    cout << "Podaj druga liczbe (b): ";
    cin >> b;
    cout << "\n=== RAPORT Z POROWNANIA ===\n\n";
    // 1. RÓWNOŚĆ ( == )
    if (a == b) {
        cout << "[==] Prawda: Liczba a jest dokladnie rowna liczbie b.\n";
    }
    else {
        cout << "[==] Falsz: Liczby a i b nie sa sobie rowne.\n";
    }

    // 2. RÓŻNOŚĆ / NIERÓWNOŚĆ ( != )
    if (a != b) {
        cout << "[!=] Prawda: Liczby a i b sa od siebie rozne.\n";
    }
    else {
        cout << "[!=] Falsz: Liczby nie roznia sie (sa takie same).\n";
    }

    // 3. WIĘKSZOŚĆ ( > )
    if (a > b) {
        cout << "[ >] Prawda: Liczba a jest wieksza od b.\n";
    }
    else {
        cout << "[ >] Falsz: Liczba a NIE jest wieksza od b.\n";
    }

    // 4. MNIEJSZOŚĆ ( < )
    if (a < b) {
        cout << "[ <] Prawda: Liczba a jest mniejsza od b.\n";
    }
    else {
        cout << "[ <] Falsz: Liczba a NIE jest mniejsza od b.\n";
    }

    // 5. WIĘKSZE LUB RÓWNE ( >= )
    if (a >= b) {
        cout << "[>=] Prawda: Liczba a jest wieksza LUB rowna liczbie b.\n";
    }
    else {
        cout << "[>=] Falsz: Liczba a jest mniejsza od b.\n";
    }

    // 6. MNIEJSZE LUB RÓWNE ( <= )
    if (a <= b) {
        cout << "[<=] Prawda: Liczba a jest mniejsza LUB rowna liczbie b.\n";
    }
    else {
        cout << "[<=] Falsz: Liczba a jest wieksza od b.\n";
    }

    return 0;
}
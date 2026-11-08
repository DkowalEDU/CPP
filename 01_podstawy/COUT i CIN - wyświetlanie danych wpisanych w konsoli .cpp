
//lekcja 1 - COUT i CIN - wyświetlanie danych wpisanych w konsoli 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string imie;
	int wiek;
	double waga;

	cout << "Podaj swoje imie: ";
	cin >> imie;

	cout << "Podaj swoj wiek: ";
	cin >> wiek;

	cout << "Podaj swoja wage: ";
	cin >> waga;


	cout << "Witaj " << imie << endl;
	cout << "Masz " << wiek << " lat i wazysz " << waga << " kg" << endl;

	return 0;
}


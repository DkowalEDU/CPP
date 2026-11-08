
//lekcja 3 - operacje arytmetyczne
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//zadanie 1 - mnożenie
	double cenaNetto, cenaBrutto8, cenaBrutto23;
	double podatekVAT8 = 0.08; //podatek VAT 8%
	double podatekVAT23 = 0.23; //podatek VAT 23%

	cout << "Podaj cene paliwa Netto: ";
	cin >> cenaNetto;

	//mnożenie VAT 8%
	cenaBrutto8 = cenaNetto + (cenaNetto * podatekVAT8);

	//mnożenie VAT 23%
	cenaBrutto23 = cenaNetto + (cenaNetto * podatekVAT23);

	cout << "Cena paliwa dla 8% VAT wynosi: " << cenaBrutto8 << " zl \n";
	cout << "Cena paliwa dla 23% VAT wynosi: " << cenaBrutto23 << " zl \n";

	//zadanie 2 - dzielenie z modulo
	int liczbaCukierkow, liczbaUczniow;
	cout << "Ile cukierkow kupiles? ";
	cin >> liczbaCukierkow;
	cout << "Ilu jest uczniow? ";
	cin >> liczbaUczniow;

	int dlaKazdego = liczbaCukierkow / liczbaUczniow; // dzielenie
	int zostalo = liczbaCukierkow % liczbaUczniow; //reszta z dzielenia

	cout << "Kazdy uczen dostanie " << dlaKazdego << " cukierkow.\n" ;
	cout << "Tobie zostanie " << zostalo << " cukierkow.\n";

	return 0;
}


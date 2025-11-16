// Projekt Lab4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

float KtoF(float kelvin5) {
	float wynik = (kelvin5 * 9.0 / 5.0 - 459.67);
	return wynik;
}
float KtoC(float kelvin4) {
	float wynik = (kelvin4 - 273.15);
	return wynik;
}
float CtoK(float celsius3) {
	float wynik = (celsius3 + 273.15);
	return wynik;
}
float CtoF(float celsius2) {
	float wynik = (celsius2 * 9.0 / 5.0) + 32.0;
	return wynik;
}
float FtoK(float fahr1) {
	float wynik = (5.0 / 9.0) * (fahr1 + 459.67);
	return wynik;
}
float FtoC(float fahr) {
	float wynik = (5.0 / 9.0) * (fahr - 32.0);
	return wynik;
}

int main()
{
	float fahr, celsius;
	for (fahr = 0.0; fahr <= 200; fahr = fahr + 20) {
		celsius = FtoC(fahr);
		cout << fahr << "   " << celsius << endl;
	}
	cout << endl;
	 
	float fahr1, kelvin;
	for (fahr1 = 0.0; fahr1 <= 200; fahr1 = fahr1 + 20) {
		kelvin = FtoK(fahr1);
		cout << fahr1 << "   " << kelvin << endl;
	}
	cout << endl;

	float celsius2, fahr2;
	for (celsius2 = 0.0; celsius2 <= 200; celsius2 += 20) {
		fahr2 = CtoF(celsius2);
		cout << celsius2 << "   " << fahr2 << endl;
	}
	cout << endl;

	float celsius3, kelvin2;
	for (celsius3 = 0.0; celsius3 <= 200; celsius3 += 20) {
		kelvin2 = CtoK(celsius3);
		cout << celsius3 << "   " << kelvin2 << endl;
	}
	cout << endl;

	float kelvin4, celsius4;
	for (kelvin4 = 0; kelvin4 <= 200; kelvin4 += 20) {
		celsius4 = KtoC(kelvin4);
		cout << kelvin4 << "   " << celsius4 << endl;
	}
	cout << endl;

	float kelvin5, fahr5;
	for (kelvin5 = 0; kelvin5 <= 200; kelvin5 += 20) {
		fahr5 = KtoC(kelvin5);
		cout << kelvin5 << "   " << fahr5 << endl;
	}
	cout << endl;


}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

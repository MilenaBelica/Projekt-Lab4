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
void program() {
	cout << "Wybierz program" << endl << endl;
	cout << "1 - przelicz Fahr -> Celsius" << endl;
	cout << "2 - przelicz Fahr->Kelwin" << endl;
	cout << "3 - przelicz Celsius->Fahr" << endl;
	cout << "4 - przelicz Celsius->Kelwin" << endl;
	cout << "5 - przelicz Kelwin->Celsius" << endl;
	cout << "6 - przelicz Kelwin->Fahr" << endl;
	cout << "7 - zakoncz dzialanie programu" << endl;
}
int fahr(int fahr) {
	if 
}

int main()
{
	int numerprogramu;

	cout << "Ktory program chcesz uruchomic?" << endl;
	program();
	cin >> numerprogramu;

	if (numerprogramu == 7) {
		cout << "Koniec programu" << endl;
		return 0;
	}
	else {
		switch (numerprogramu) {
		case(1): {
			float fahr, celsius;
			cout << "Podaj wartosc Fahr: ";
			cin >> fahr;
			fahr();
			celsius = FtoC(fahr);
			cout << fahr << " Fahr to " << celsius << " Celsius " << endl;
			cout << endl; break;
		}
		case (2): {
			float fahr1, kelvin;
			cout << "Podaj wartosc Fahr: ";
			cin >> fahr1;
			kelvin = FtoK(fahr1);
			cout << fahr1 << " Fahr to " << kelvin << " Kelvin " << endl;
			cout << endl; break;
		}
		case (3): {
			float celsius2, fahr2;
			cout << "Podaj wartosc Celsius: ";
			cin >> celsius2;
			fahr2 = CtoF(celsius2);
			cout << celsius2 << " Celsius to " << fahr2 << " Fahr " << endl;
			cout << endl; break;
		}
		case (4): {
			float celsius3, kelvin2;
			cout << "Podaj wartosc Celsius: ";
			cin >> celsius3;
			kelvin2 = CtoK(celsius3);
			cout << celsius3 << " Celsius to " << kelvin2 << " Fahr " << endl;
			cout << endl; break;
		}
		case (5): {
			float kelvin4, celsius4;
			cout << "Podaj wartosc Kelvin: ";
			cin >> kelvin4;
			celsius4 = KtoC(kelvin4);
			cout << kelvin4 << " Kelvin to " << celsius4 << " Celsius " << endl;
			cout << endl; break;
		}
		case (6): {
			float kelvin5, fahr5;
			cout << "Podaj wartosc Kelvin: ";
			cin >> kelvin5;
			fahr5 = KtoC(kelvin5);
			cout << kelvin5 << " Kelvin to " << fahr5 << " Celsius " << endl;
			cout << endl; break;
		}
		}
	}
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

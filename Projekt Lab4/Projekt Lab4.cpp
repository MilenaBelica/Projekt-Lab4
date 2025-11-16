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
int check(float temp, char stopnie) {

	switch (stopnie) {
	case ('F'): {
		if (temp < -459.67)
			return -999.0;
		else
			return temp; break;
	}
	case ('C'): {
		if (temp < -273.15)
			return -999.0;
		else
			return temp; break;
	}
	case ('K'): {
		if (temp < 0)
			return -999.0;
		else
			return temp; break;
	}
}
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

			int wynik = check(fahr, 'F');
			if (wynik == -999.0) {
				cout << "Podano zly przedzial temperatury";
			}
			else {
				celsius = FtoC(fahr);
				cout << fahr << " Fahr to " << celsius << " Celsius " << endl;
			}
			cout << endl; break;
		}
		case (2): {
			float fahr, kelvin;
			cout << "Podaj wartosc Fahr: ";
			cin >> fahr;

			int wynik = check(fahr, 'F');
			if (wynik == -999.0) {
				cout << "Podano zly zakres tempeartury";
			}
			else {
				kelvin = FtoK(fahr);
				cout << fahr << " Fahr to " << kelvin << " Kelvin " << endl;
			}
			cout << endl; break;
		}
		case (3): {
			float celsius, fahr;
			cout << "Podaj wartosc Celsius: ";
			cin >> celsius;

			int wynik = check(celsius, 'C');
			if (wynik == -999.0){
				cout << "Podano zly zakres temperatury";
			}
			else {
				fahr = CtoF(celsius);
				cout << celsius << " Celsius to " << fahr << " Fahr " << endl;
			}
			cout << endl; break;
			
		}
		case (4): {
			float celsius, kelvin;
			cout << "Podaj wartosc Celsius: ";
			cin >> celsius;

			int wynik = check(celsius, 'C');
			if (wynik == -999.0) {
				cout << "Podano zly zakres temperatury";
			}
			else {
				kelvin = CtoK(celsius);
				cout << celsius << " Celsius to " << kelvin << " Fahr " << endl;
			}
			cout << endl; break;
		}
		case (5): {
			float kelvin, celsius;
			cout << "Podaj wartosc Kelvin: ";
			cin >> kelvin;

			int wynik = check(kelvin, 'K');
			if (wynik == -999.0) {
				cout << "Podano zly zakres temperatury";
			}
			else {
				celsius = KtoC(kelvin);
				cout << kelvin << " Kelvin to " << celsius << " Celsius " << endl;
			}
			cout << endl; break;
		}
		case (6): {
			float kelvin, fahr;
			cout << "Podaj wartosc Kelvin: ";
			cin >> kelvin;

			int wynik = check(kelvin, 'K');
			if (wynik == -999.0) {
				cout << "Podano zly zakres temperatury";
			}
			else {
				fahr = KtoC(kelvin);
				cout << kelvin << " Kelvin to " << fahr << " Celsius " << endl;
			}
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

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a1;
	int qua;
	double a;
	double b;
	double c;
	double x;
	double p;
	double q;
	double D;
	cout << "Was wollen Sie tun? \n"
		<< "1 - L\x94 \bsungsformel anwenden\n"
		<< "2 - Atombindung analysieren\n"
		<< "-> ";
	cin >> a1;

	switch (a1)
	{
	default: 
		cout << "Dann eben nicht!\n";
		system("pause");
		break;
	case 1:
		system("cls");
		cout << "Welche Form hat Ihre quadratische Gleichung?\n"
			<< "1: x^2 + px + q\n"
			<< "2: ax^2 + bx +c\n"
			<< "-> ";
		cin >> qua;
		switch (qua)
		{
		default:
			cout << "Dann eben nicht!\n";
			system("pause");
			break;
		case 1:
			system("cls");
			cout << "Bitte eingeben: \n"
				<< "Form: x^2 + px + q\n"
				<< "p:\n"
				<< "-> ";
			cin >> p;
			cout << endl;
			cout << "q:\n"
				 << "-> ";
			cin >> q;
			cout << endl;
			D = (p / 2) * (p / 2) - q;
			if (D > 0) {
				double x1;
				double x2;
				x1 = -(p / 2) - sqrt(D);
				x2 = -(p / 2) + sqrt(D);
				cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
				system("pause");
				return 0;
			}
			else if (D == 0) {
				x = -(p / 2);
				cout << "x = " << x << endl;
				system("pause");
				return 0;
			}
			else if (D < 0) {
				cout << "\nEs gibt keine L\x94 \bsung!\n";
				system("pause");
				return 0;
			}
		case 2:
			system("cls");
			cout << "Bitte eingeben: \n"
				<< "Form: ax^2 + bx +c\n"
				<< "a:\n"
				<< "-> ";
			cin >> a;
			cout << "b:\n"
				<< "-> ";
			cin >> b;
			cout << "c:\n"
				<< "-> ";
			cin >> c;
			D = (b*b) - (4*a*c);
			if (D > 0) {
				double x1;
				double x2;
				x1 = (-b - sqrt(D)) / (2 * a);
				x2 = (-b + sqrt(D)) / (2 * a);
				cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
				system("pause");
				return 0;
			}
			else if (D == 0) {
				x = (-b) / (2 * a);
				cout << "x = " << x << endl;
				system("pause");
				return 0;
			}
			else if (D < 0) {
				cout << "\nEs gibt keine L\x94 \bsung!\n";
				system("pause");
				return 0;
			}
		}
	case 2:
		cout << "" << endl;
		string decision;
		cout << "1. nur Nichtmetallatome" << endl;
		cout << "2. Metall- + Nichtmetallatome" << endl;
		cout << "-> ";
		cin >> decision;
		cout << endl;
		if (decision == "1") {
			//cout << endl;
			cout << "Es handelt sich um eine salzartige Verbindung" << endl;
			cout << "Aufbau aus Ionen => Ionenbindung\n\n";
			system("pause");
			return 0;
		}


		cout << "EN-Differenz der Bindungspartner?" << endl << "1. Ja" << endl << "2. Nein";
		cout << endl << "-> ";
		cin >> decision;
		cout << endl;
		if (decision == "2") {
			//cout << endl;
			cout << "Diese Atombindung ist unpolar" << endl;
			cout << "=> van der Waals Wechselwirkungen\n\n";
			system("pause");
			return 0;
		}


		cout << "=> polare Bindung. Molek\x81 \blbau:" << endl;
		cout << "1. symmetrisch" << endl << "2. asymmetrisch";
		cout << endl << "-> ";
		cin >> decision;
		cout << endl;
		if (decision == "1") {
			cout << "Das Molekül ist unpolar, da die Ladungsschwerpunkte zusammenfallen" << endl;
			cout << "Deshalb wirken hier van der Waals Wechselwirkungen\n\n";
			system("pause");
			return 0;
		}


		cout << "=> Dipolmolek\x81 \bl. Sind N,O oder F enthalten?:" << endl;
		cout << "1. ja" << endl;
		cout << "2. nein" << endl << "-> ";
		cin >> decision;
		cout << endl;
		if (decision == "1")
		{
			cout << "Es handelt sich um Wasserstoffbr\x81 \bckenbindungen";
		}
		else if (decision == "2") {
			cout << "Es handelt sich um Dipol-Dipol-Wechselwirkungen";
		}
		else {
			cout << "Mindestens einer deiner Eingaben war fehlerhaft\n\n";

		}
		system("pause");
	}
	return 0;
}
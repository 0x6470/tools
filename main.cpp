/* The original is written in German.
Feel free to contribute a translation! */

#include <iostream>
#include <string>
#include <cmath>
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

template <typename T>
T isfail(T strcin) {
	if (cin.fail()) {
		cout << "Sie m\x81 \bssen eine Zahl eingeben!\n";
		system("pause");
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int a1;
	int qua;
	int qua2;
	int spf;
	double SPX;
	double SPY;
	double a;
	double b;
	double c;
	double d;
	double e;
	double x;
	double y;
	double p;
	double q;
	double D;
	cout << "Was wollen Sie tun? \n"
		<< "1 - L\x94 \bsungsformel anwenden\n"
		<< "2 - Scheitelpunktform <-> allgemeine Form <-> Scheitelpunkt\n"
		<< "3 - Atombindung analysieren\n"
		<< "-> ";
	a1 = _getch() - '0';
	cout << a1;
	Sleep(100);
	switch (a1)
	{
	default:
		cout << "Dann eben nicht!\n";
		system("pause");
		return 0;
	case 1:
		system("cls");
		cout << "Welche Form hat Ihre quadratische Gleichung?\n"
			<< "1: x" << (char)253 << " + px + q\n"
			<< "2: ax" << (char)253 << " + bx + c\n"
			<< "-> ";
		qua = _getch() - '0';
		cout << qua;
		Sleep(100);
		switch (qua)
		{
		default:
			cout << "Dann eben nicht!\n";
			system("pause");
			return 0;
		case 1:
			system("cls");
			cout << "Bitte eingeben: \n"
				<< "Form: x" << (char)253 << " + px + q\n"
				<< "p:\n"
				<< "-> ";
			cin >> p;
			if (isfail(p)) { return 0; }
			cout << endl;
			cout << "q:\n"
				<< "-> ";
			cin >> q;
			if (isfail(q)) { return 0; }
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
				<< "Form: ax" << (char)253 << " + bx + c\n"
				<< "a:\n"
				<< "-> ";
			cin >> a;
			if (isfail(a)) { return 0; }
			cout << "b:\n"
				<< "-> ";
			cin >> b;
			if (isfail(b)) { return 0; }
			cout << "c:\n"
				<< "-> ";
			cin >> c;
			if (isfail(c)) { return 0; }
			D = (b*b) - (4 * a*c);
			if (a != 0) {
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
			else {
				cout << "\nEs gibt keine L\x94 \bsung!\n";
				system("pause");
				return 0;
			}
			return 0;
		}
	case 2:
		system("cls");
		cout << "Was wollen Sie tun?\n"
			<< "1 - allgemeine Form -> Scheitelpunktform\n"
			<< "2 - Scheitelpunktform -> allgemeine Form\n"
			<< "3 - Scheitelpunkt -> allgemeine Form\n"
			<< "-> ";
		spf = _getch() - '0';
		cout << spf;
		Sleep(100);
		switch (spf) {
		default:
			cout << "Dann eben nicht!\n";
			system("pause");
			return 0;

		case 1:
			cout << "\n \nWelche Form hat Ihre quadratische Gleichung?\n"
				<< "1: x" << (char)253 << " + px + q\n"
				<< "2: ax" << (char)253 << " + bx + c\n"
				<< "-> ";
			qua2 = _getch() - '0';
			cout << qua2;
			Sleep(100);
			switch (qua2)
			{
			default:
				cout << "Dann eben nicht!\n";
				system("pause");
				return 0;

			case 1:
				system("cls");
				cout << "Bitte eingeben: \n"
					<< "Form: x" << (char)253 << " + px + q\n"
					<< "p:\n"
					<< "-> ";
				cin >> p;
				if (isfail(p)) { return 0; }
				cout << endl;
				cout << "q:\n"
					<< "-> ";
				cin >> q;
				if (isfail(q)) { return 0; }
				cout << endl;
				SPX = -(p / 2);
				SPY = (-(p / 2) * (p / 2)) + q;
				cout << "Scheitelpunkt: S(" << SPX << "|" << SPY << ")" << endl;
				//cout << "=> Scheitelpunktform: f(x) = (x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl;
				if (SPX < 0 || SPY < 0) {
					if (SPX < 0 && SPY >= 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x + " << (0 - SPX) << ")" << (char)253 << " + " << SPY << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x + " << (0 - SPX) << ")" << (char)253 << " + " << SPY << endl << endl; }
					}
					else if (SPY < 0 && SPX >= 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x - " << SPX << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x - " << SPX << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
					}
					else if (SPX < 0 && SPY < 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x + " << (0 - SPX) << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x + " << (0 - SPX) << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
					}
				}
				else if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl; }
				else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
				else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl; }
				system("pause");
				return 0;

			case 2:
				system("cls");
				cout << "Bitte eingeben: \n"
					<< "Form: ax" << (char)253 << " + bx + c\n"
					<< "a:\n"
					<< "-> ";
				cin >> a;
				if (isfail(a)) { return 0; }
				cout << "b:\n"
					<< "-> ";
				cin >> b;
				if (isfail(b)) { return 0; }
				cout << "c:\n"
					<< "-> ";
				cin >> c;
				if (isfail(c)) { return 0; }
				SPX = -((b) / (2 * a));
				SPY = (4 * a*c - b * b) / (4 * a);
				cout << "Scheitelpunkt: S(" << SPX << "|" << SPY << ")" << endl;
				//cout << "=> Scheitelpunktform: f(x) = " << a << " * (x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl;
				if (SPX < 0 || SPY < 0) {
					if (SPX < 0 && SPY >= 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x + " << (0 - SPX) << ")" << (char)253 << " + " << SPY << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x + " << (0 - SPX) << ")" << (char)253 << " + " << SPY << endl << endl; }
					}
					else if (SPY < 0 && SPX >= 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x - " << SPX << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x - " << SPX << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
					}
					else if (SPX < 0 && SPY < 0) {
						if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x + " << (0 - SPX) << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
						else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
						else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x + " << (0 - SPX) << ")" << (char)253 << " - " << (0 - SPY) << endl << endl; }
					}
				}
				else if (a == 1) { cout << "=> Scheitelpunktform: f(x) = " << "(x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl; }
				else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
				else { cout << "=> Scheitelpunktform: f(x) = " << a << " * (x - " << SPX << ")" << (char)253 << " + " << SPY << endl << endl; }
				system("pause");
				return 0;
			}
		case 2:
			system("cls");
			cout << "Bitte eingeben: \n"
				<< "Form: a * (x - d)" << (char)253 << " + e"
				<< "\na:\n"
				<< "-> ";
			cin >> a;
			if (isfail(a)) { return 0; }
			cout << "d:\n"
				<< "-> ";
			cin >> d;
			if (isfail(d)) { return 0; }
			cout << "e:\n"
				<< "-> ";
			cin >> e;
			if (isfail(e)) { return 0; }
			cout << "Scheitelpunkt: S(" << d << "|" << e << ")" << endl;
			b = d * (-2 * a);
			c = (a*(d*d)) + e;
			if (b < 0 || c < 0) {
				if (b < 0 && c >= 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " - " << (0 - b) << "x + " << c << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " - " << (0 - b) << "x + " << c << endl; }
				}
				else if (c < 0 && b >= 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " + " << b << "x - " << (0 - c) << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " + " << b << "x - " << (0 - c) << endl; }
				}
				else if (b < 0 && c < 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " - " << (0 - b) << "x - " << (0 - c) << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " - " << (0 - b) << "x - " << (0 - c) << endl; }
				}
			}
			else if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " + " << b << "x + " << c << endl; }
			else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
			else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " + " << b << "x + " << c << endl; }
			cout << endl;
			system("pause");
			return 0;
		case 3:
			system("cls");
			cout << "Bitte eingeben: \n"
				<< "Form: S(d|e)"
				<< "\nd:\n"
				<< "-> ";
			cin >> d;
			if (isfail(d)) { return 0; }
			cout << "e:\n"
				<< "-> ";
			cin >> e;
			if (isfail(e)) { return 0; }
			cout << "\nBitte einen Punkt eingeben, der auf dem Graphen liegt: \n"
				<< "Form: P(x|y)"
				<< "\nx:\n"
				<< "-> ";
			cin >> x;
			if (isfail(x)) { return 0; }
			cout << "y:\n"
				<< "-> ";
			cin >> y;
			if (isfail(y)) { return 0; }
			a = (y - e) / ((x - d)*(x - d));
			b = d * (-2 * a);
			c = (a*(d*d)) + e;
			if (b < 0 || c < 0) {
				if (b < 0 && c >= 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " - " << (0 - b) << "x + " << c << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " - " << (0 - b) << "x + " << c << endl; }
				}
				else if (c < 0 && b >= 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " + " << b << "x - " << (0 - c) << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " + " << b << "x - " << (0 - c) << endl; }
				}
				else if (b < 0 && c < 0) {
					if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " - " << (0 - b) << "x - " << (0 - c) << endl; }
					else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
					else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " - " << (0 - b) << "x - " << (0 - c) << endl; }
				}
			}
			else if (a == 1) { cout << "=> allgemeine Form: " << "x" << (char)253 << " + " << b << "x + " << c << endl; }
			else if (a == 0) { cout << "a darf nicht 0 sein => irgendeine Eingabe war falsch"; }
			else { cout << "=> allgemeine Form: " << a << "x" << (char)253 << " + " << b << "x + " << c << endl; }
			cout << endl;
			system("pause");
			return 0;
		}
	case 3:
		system("cls");
		int decision;
		cout << "1. nur Nichtmetallatome" << endl;
		cout << "2. Metall- + Nichtmetallatome" << endl;
		cout << "-> ";
		decision = _getch() - '0';
		cout << decision;
		Sleep(100);
		cout << endl;
		if (decision == 2) {
			cout << "Es handelt sich um eine salzartige Verbindung" << endl;
			cout << "Aufbau aus Ionen => Ionenbindung\n\n";
			system("pause");
			return 0;
		} else

		cout << "EN-Differenz der Bindungspartner?" << endl << "1. Ja" << endl << "2. Nein";
		cout << endl << "-> ";
		decision = _getch() - '0';
		cout << decision;
		Sleep(100);
		cout << endl;
		if (decision == 1) {
			cout << "Diese Atombindung ist unpolar" << endl;
			cout << "=> van der Waals Wechselwirkungen\n\n";
			system("pause");
			return 0;
		}
		cout << "=> polare Bindung. Molek\x81 \blbau:" << endl;
		cout << "1. symmetrisch" << endl << "2. asymmetrisch";
		cout << endl << "-> ";
		decision = _getch() - '0';
		cout << decision;
		Sleep(100);
		cout << endl;
		if (decision == 1) {
			cout << "Das Molek\x81 \bl ist unpolar, da die Ladungsschwerpunkte zusammenfallen" << endl;
			cout << "Deshalb wirken hier van der Waals Wechselwirkungen\n\n";
			system("pause");
			return 0;
		}

		cout << "=> Dipolmolek\x81 \bl? Sind N, O oder F enthalten?:" << endl;
		cout << "1. ja" << endl;
		cout << "2. nein" << endl << "-> ";
		decision = _getch() - '0';
		cout << decision;
		Sleep(100);
		cout << endl;
		if (decision == 1)
		{
			cout << "Es handelt sich um Wasserstoffbr\x81 \bckenbindungen";
		}
		else if (decision == 2) {
			cout << "Es handelt sich um Dipol-Dipol-Wechselwirkungen";
		}
		else {
			cout << "Mindestens einer deiner Eingaben war fehlerhaft";

		}
		cout << endl;
		system("pause");
	}
	return 0;
}

#include <iostream>

using namespace std;

// Abbiamo dichiarato la struttura misura con 2 campi.
struct misura
{
	string unit; // Nome dell'unità di misura da usare.
	int val; // Valore misura.
};

int main() {
	// Ho dichiarato una variabile di tipo Struttura misura.
	struct misura mymisura;
	cout << "Esercitazione base sui records: Misure" << endl;
	cout << "Inserire l'unità di misura che si vuole registrare" << endl;
	string un;
	cin >> un;
	mymisura.unit = un; // Assegno un valore a tale variabile dentro la struct.

	cout << "Inserire il valore misurato" << endl;
	int n;
	cin >> n;
	mymisura.val = n; // Assegno un altro valore

	/*
	 * Provo a visualizzare la misura in due modi diversi.
	 * Vediamo cosa succede.
	 */

	// Questo non funziona, perché?
	// cout << "La misura inserita e' " << mymisura << endl;

	// Questi due stampano invece qualcosa... Ma cosa?
	cout << "La misura inserita e' " << &mymisura << endl;
	cout << "La misura inserita e' " << mymisura.val << " " << mymisura.unit << endl;

	cout << "Arrivederci!" << endl;
	return 0;
}
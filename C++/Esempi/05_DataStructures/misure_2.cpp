#include <iostream>

using namespace std;

// Abbiamo dichiarato la struttura misura con 2 campi.
struct misura
{
	string unit; // Nome dell'unità di misura da usare.
	int val; // Valore misura.
};

void printMisure(struct misura *mis);

void printOneMisure(struct misura mis);

int main() {
	// Ho dichiarato una variabile di tipo Struttura misura.
	cout << "Esercitazione base sui records: Misure" << endl;

	int num;
	do {
		cout << "Inserire il numero di misure che si vogliono registrare" << endl;
		cin >> num;
	} while(num <= 0);

	// Perché l'ho messa fuori dal ciclo sottostante?
	cout << "Inserire l'unità di misura che si vuole registrare" << endl;
	string un;
	cin >> un;

	struct misura multi[num];

	int i = 0;
	do {
		struct misura mymisura;

		cout << "Inserire il valore misurato" << endl;
		int n;
		cin >> n;
		mymisura.val = n; // Assegno un altro valore
		mymisura.unit = un;

		multi[i] = mymisura;
		i++;

	} while(i < num);

	cout << "Stampa misure 1" << endl;
	for(int i = 0; i < num; i++) {
		printMisure(&(multi[i]));
	}

	cout << "Stampa misure 2" << endl;
	for(int i = 0; i < num; i++) {
		printOneMisure(multi[i]);
	}

	cout << "Calcolo della media delle misure" << endl;
	int somma = 0;
	for(int i = 0; i < num; i++) {
		somma += multi[i].val;
	}
	cout << "La media è " << somma / num << endl;

	cout << "Arrivederci!" << endl;
	return 0;
}

void printMisure(struct misura *mis) {
	// Perché ho dovuto usare l'operatore freccia?
	cout << "Val: " << mis->val << " Unit: " << mis->unit << endl;
}

void printOneMisure(struct misura mis){
	// E perché qui non l'ho dovuto usare?
	cout << "Val mis: " << mis.val << " Unit mis: " << mis.unit << endl;
}
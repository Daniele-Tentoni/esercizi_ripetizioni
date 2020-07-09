#include <iostream>

using namespace std;

// Abbiamo dichiarato la struttura record contatto con 3 campi.
struct contatto
{
	string name; // Nome e Cognome.
	string num; // Numero di telefono.
	string address; // Indirizzo di casa.
};

void add_cn(struct contatto *cn, struct contatto *rb) {
	// Aggiunge un contatto alla rubrica.
}

void rm_cn(struct contatto *cn, struct contatto *rb) {
	// Rimuove un contatto in base al suo nome.
}

void sort_cn(struct contatto *rb) {
	// Ordina i contatti in rubrica.
}

void show_cn(struct contatto *cn) {
	// Mostra un contatto formattato per bene.
}

int main() {
	cout << "Esercitazione base sui records: Rubrica" << endl;
	cout << "Inserire il numero di contatti di cui deve essere composta la " <<
		"rubrica";
	int n;
	cin >> n;
	/*
	 * Ho dichiarato la rubrica come array del tipo della nuova struttura dei 
	 * contatti.
	 */
	struct contatto rubrica[n]; 
	for(int i = 0; i < n; i++) {
		/*
		 * Alloco la memoria necessaria a mantenere i miei contatti.
		 */
		contatto[i] = memory_alloc(size_of(struct contatto));
	}

	char opt;
	do {
		cout << "Scegli un'opzione dal menù:" << endl;
		cout << "[0] Esci" << endl;
		cout << "[1] Aggiungi contatto" << endl;
		cout << "[2] Elimina contatto" << endl;
		cout << "[3] Visualizza rubrica" << endl;
		cout << "[4] Ordina rubrica" << endl;
		cin >> opt;

		switch(opt) {
			case '0':
				cout << "Ci dispiace che tu voglia lasciarci.";
				cout << " Sei sicuro? [S/n]";
				char risp;
				cin >> risp;
				if(risp != 'S')
					opt = 'a';
				break;
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			default:
				cout << "Non esiste nessuna scelta con questo";
				cout << " carattere" << endl;
		}
	} while(opt != '0');

	cout << "Arrivederci!" << endl;
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

/*
 * Memorizzare le generalità di n persone.
 */

// Nome, Cognome, CF, Comune
struct identita {
	string nome;
	string cognome;
	string cf;
	string comune;
};

void stampa_identita(identita id) {
	cout << "Nome:\t" << id.nome << endl;
	cout << "Cognome: " << id.cognome << endl;
	cout << "CF:\t" << id.cf << endl;
	cout << "Comune:\t" << id.comune << endl;
}

void stampa_comune(identita anagrafe[], int n, string comune) {
	for(int i = 0; i < n; i++) {
		if(anagrafe[i].comune == comune) {
			stampa_identita(anagrafe[i]);
		}
	}
}

void stampa_cf(identita anagrafe[], int n);

void ordina_tabella(identita anagrafe[], int n);

int main() {
	/*
	 * Stampare tutte le persone che vivono in un determinato comune.
	 * Stampare il codice fiscale della persona fornito il nome e cognome.
	 * 
	 */

	cout << "Quante persone gestire?" << endl;
	int n;
	cin >> n;

	identita anagrafe[n];
	// Prendiamo in input tutte le persone che voglamo gestire.
	for(int i = 0; i < n; i++) {
		identita pers;
		cout << "Inserire nome" << endl;
		cin >> pers.nome;
		cout << "Inserire cognome" << endl;
		cin >> pers.cognome;
		cout << "Inserire cf" << endl;
		cin >> pers.cf;
		cout << "Inserire comune" << endl;
		cin >> pers.comune;
		anagrafe[i] = pers;
	}

	cout << "Quale operazione vuoi effettuare?" << endl;
	cout << "[1] Stampare tutte le persone che vivono in un determinato comune." << endl;
	cout << "[2] Stampare il codice fiscale della persona fornito il nome e cognome." << endl;
	cout << "[3] Ordinare la tabella in ordine alfabetico." << endl;
	int opt;
	cin >> opt;

	switch(opt) {
		case 1: {
			cout << "Inserisci comune" << endl;
			string com;
			cin >> com;
			stampa_comune(anagrafe, n, com);
			break;
		}
		case 2: {
			cout << "Non hai inserito nulla" << endl;
			// stampa_cf(anagrafe, n);
			break;
		}
		case 3: {
			cout << "Non hai inserito nulla" << endl;
			// ordina_tabella(anagrafe, n);
			break;
		}
		default: {
			cout << "Non hai inserito nulla" << endl;
			break;
		}
	}

	cout << "Arrivederci" << endl;

	return 0;
}
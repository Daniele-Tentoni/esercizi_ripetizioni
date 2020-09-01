#include <iostream>

using namespace std;

int main() {
	cout << "Lezione sui cicli: parte 4" << endl;
	cout << "Inserire il numero di saluti da ricevere" << endl;
	cout << "Se sei stanco possiamo:" << endl;
	cout << "[0] Saltarne uno" << endl;
	cout << "[1] Interrompere" << endl;
	cout << "[2] Continuare normalmente" << endl;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cout << "Sei stanco?" << endl;
		int op;
		cin >> op;
		if(op == 0) {
			/*
			 * Questa istruzione fa "saltare" l'iterazione
			 * corrente, passando a quella successiva.
			 */ 
			continue;
		} else if(op == 1) {
			/*
			 * Questa istruzione fa "interrompere l'esecuzione
			 * del blocco corrente facendolo uscire.
			 * Dove l'abbiamo già vista?
			 */
			break;
		} else {
			cout << "Allora continuiamo normalmente." << endl;
		}
		
		cout << "Salve " << i << endl;
	}
	
	cout << "Arrivederci" << endl;
	system("pause");
	return 0;
}

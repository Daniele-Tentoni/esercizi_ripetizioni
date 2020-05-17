#include <iostream>

using namespace std;

int main() {
	cout << "Lezione sui cicli: parte 3" << endl;
	cout << "Inserire il numero di saluti da ricevere" << endl;
	int n;
	cin >> n;
	
	/*
	 * Questo ciclo permette di controllare direttamente il
	 * numero di ripetizioni del suo blocco di codice.
	 * Viene composto da diverse istruzioni in una.
	 */
	for(int i = 0; i < n; i++) {
		cout << "Salve" << endl;
	}
	
	cout << "Arrivederci" << endl;
	system("pause");
	return 0;
}

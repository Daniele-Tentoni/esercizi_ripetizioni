#include <iostream>

using namespace std;

int main() {
	cout << "Lezione sui cicli: parte 1" << endl;
	
	// Chiedo l'inserimento di un numero che mi servir� pi� avanti.
	cout << "Inserire un numero" << endl;
	int n;
	cin >> n;
	
	/*
	 * Questo ciclo prevede la dichiarazione preventiva di una condizione
	 * per la sua esecuzione e proseguimento.
	 * Se la condizione � falsa, allora non entro/continuo l'esecuzione.
	 * Se la condizione � vera, allora entro/continuo l'esecuzione.
	 * Questo ciclo viene detto anche "Precondizionale"
	 */
	while (n > 0) {
		cout << "Il numero e' " << n << ", lo decremento." << endl;
		n--;
	}
	
	// Stampo il nuovo numero dopo il ciclo.
	cout << "Il numero e' " << n << " totalmente azzerato";
	
	system("pause");
	return 0;
}

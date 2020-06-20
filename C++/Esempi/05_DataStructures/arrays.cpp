#include <iostream>

using namespace std;

void swapArrayOf4Elements(int a[4]);
void printArray(int *a, size_t n);
void swapArray(int *a, size_t n);

/* 
Un ARRAY è una sequenza di elementi dello stesso tipo, quindi detto omogeneo.
*/

int main() {
	int wait;
	// Posso dichiarare un array con il tipo degli elementi e la sua dimensione.
	int myArray[5];
	// Oppure senza dimensione ma con una sequenza di elementi.
	int another[] {2, 4, 6, 8};
	// La dimesione deve sempre essere una costante intera.
	// Fare schema della rappresentazione in memoria con gli indici.
	// Tutti i successivi elementi non inizializzati verranno posti a 0.

	// Possiamo accedere ai singoli elementi dell'array attraverso l'operatore [x].
	myArray[1] = 1;
	// Non possiamo accedere ad un array oltre alla sua dimensione.
	// another[5] = 10 ERRORE!!!

	// Possiamo scansionare tutto un array attraverso un ciclo for.
	for(int i = 0; i < 4; i++) {
		cout << "Index: " << i << " ";
		cout << "Value: " << another[i] << endl;
	}
	cin >> wait;

	// Possiamo usare vettori come parametri di funzioni.
	swapArrayOf4Elements(another);
	printArray(another, 4);
	cin >> wait;

	swapArray(myArray, 5);
	printArray(myArray, 5);
	// Notare come myArray non sia stato inizializzato.
	return 0;
}

void swapArrayOf4Elements(int a[4]) {
	// Perché arrivo al massimo fino a 3?
	for(int i = 0; i < 3; i++) {
		int tmp = a[i];
		a[i] = a[i+1];
		a[i+1] = tmp;
	}
}

void printArray(int *a, size_t n) {
	// Devo chiarare di spostarmi lungo l'array di un numero di byte congruo.
	for(size_t i = 0; i < n; i++) {
		cout << "Index: " << i << " ";
		cout << "Value: " << a[i] << endl;
	}
}

void swapArray(int *a, size_t n) {
	// Perché arrivo al massimo fino a 3?
	for(size_t i = 0; i < n - 1; i++) {
		int tmp = a[i];
		a[i] = a[i+1];
		a[i+1] = tmp;
	}
}

// Mostrare lo shift degli elementi
// Mostrare l'ordinamento selettivo
// Mostrare l'ordinamento a bolle
// Mostrare il problema della ricerca
// Mostrare il problema della ricerca binaria
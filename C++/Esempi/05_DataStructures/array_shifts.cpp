#include <iostream>

using namespace std;

void shiftone(int *a);
void shiftn(int *a, size_t n);
void shiftall(int *a, size_t n);

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
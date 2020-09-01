#include <iostream>
#include <string>

using namespace std;

void swap(string *a, string *b) {
	string tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArray(string *a, int start, int end) {
	cout << "[";
	for(int i = start; i < end; i++) {
		cout << a[i];
		if(i != end - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

void bubbleSort(string *a, int start, int end) {
	// Variabili come sopra.
	int flag = 0, cont = 0;

	for(int i = start; i < end - 1; i++) {
		for(int j = start; j < end - 1 - i + start; j++, cont++)
			// Scambio due valori non appena mi accorgo che sono disordinati.
			if(a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		// printArray(a, start, end);
	}
}

int main() {
	// Chiedo i nomi degli studenti.
	int n;
	cout << "Inserire il numero degli studenti da registrare" << endl;
	cin >> n;

	string alunni[n];
	for(int i = 0; i < n; i++) {
		cout << "Inserire il nome dello studente " << i + 1 << endl;
		cin >> alunni[i];
	}

	cout << "Adesso provvedo ad ordinarlo" << endl;
	printArray(alunni, 0, n);
	// Variabili come sopra.
	int flag = 0, cont = 0;

	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i + 0; j++, cont++)
			// Scambio due valori non appena mi accorgo che sono disordinati.
			if(alunni[j] > alunni[j + 1])
				swap(alunni[j], alunni[j + 1]);
		// printArray(a, start, end);
	}
	printArray(alunni, 0, n);
}
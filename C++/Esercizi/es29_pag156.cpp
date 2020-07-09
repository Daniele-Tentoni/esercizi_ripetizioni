#include<iostream>
#include<climits>

using namespace std;

void printArray(int *a, size_t n) {
	// Devo chiarare di spostarmi lungo l'array di un numero di byte congruo.
	for(size_t i = 0; i < n; i++) {
		cout << "Index: " << i << " ";
		cout << "Value: " << a[i] << endl;
	}
}

int main() {
	/*
	 * Contare le ricorrenze di ogni singolo numero dentro all'array.
	 */
	int length;
	cout << "Inserire lunghezza del vettore " << endl;
	cin >> length;

	int nums[length];
	for(int i = 0; i < length; i++) {
		cout << "Inserire il valore " << i + 1 << "-esimo" << endl;
		cin >> nums[i];
	}
	printArray(nums, length);

	// Contare le ricorrenze di un singolo valore.
	int cont = 0;
	for(int i = 0; i < length; i++) {
		if(nums[i] == 9) {
			cont++;
		}
	}
	cout << "Il numero 9 compare " << cont << " volte." << endl;

	// Calcolo il massimo.
	int max = INT_MIN;
	for(int i = 0; i < length; i++) {
		if(nums[i] > max)
			max = nums[i];
	}

	// Dichiarare array di contatori.
	int conts[max + 1];
	for(int i = 0; i < max + 1; i++) {
		conts[i] = 0;
	}

	// Trovo effettivamente tutti i contatori.
	for(int i = 0; i < length; i++) {
		conts[nums[i]]++;
	}
	printArray(conts, max + 1);

	return 0;
}
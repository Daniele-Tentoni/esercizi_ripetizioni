#include <iostream>
#define L 5

using namespace std;

void shiftWithLoosing(int *a, size_t size, bool forward);
void shiftWithoutLoosing(int *a, size_t size, bool forward);
void printArray(int *a, size_t start, size_t end);

/* 
Un ARRAY è una sequenza di elementi dello stesso tipo, quindi detto omogeneo.
*/

int main() {
	int myArray[L] = {1, 2, 3, 4, 5};

	// Mostro come effettuare lo shift degli elementi dell'array.
	printArray(myArray, 0, L);
	shiftWithLoosing(myArray, L, true);
	printArray(myArray, 0, L);

	// Mostro come effettuare lo shift di tutti gli elementi dell'array
	// anche senza perdere l'informazione in esso contenuta.
	shiftWithoutLoosing(myArray, L, true);
	printArray(myArray, 0, L);
	return 0;
}

void shiftWithLoosing(int *a, size_t size, bool forward) {
	for(int i = 0; i < size - 1; i++)
		if(forward)
			a[i] = a[i + 1];
		else
			a[i + 1] = a[i];
}

void shiftWithoutLoosing(int *a, size_t size, bool forward) {
	int tmp = forward ? a[0] : a[size - 1];
	shiftWithLoosing(a, size, forward);
	if(forward)
		a[size - 1] = tmp;
	else
		a[0] = tmp;
}

void printArray(int *a, size_t start, size_t end) {
	cout << "[";
	for(size_t i = start; i < end; i++) {
		cout << a[i];
		if(i != end - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}
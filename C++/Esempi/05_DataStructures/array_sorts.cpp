#include <iostream>
#include <climits>

/*
 * Qui ho definito la lunghezza e i numeri dentro all'array.
 */
#define L 9

using namespace std;

void selectionSort(int *a, int start, int end);

void bubbleSort(int *a, int start, int end);

void mergeSort(int *a, int start, int end);

void printArray(int *a, size_t start, size_t end);

int main() {
	cout << "Ordinamento a selezione" << endl;
	int a[] = {2,4,3,8,5,3,8,4,6};

	cout << "Prima della selezione." << endl;
	printArray(a, 0, L);

	/*
	 * Adesso uso la selezione.
	 */
	int cont = 0;
	selectionSort(a, 0, L);
	cout << "Dopo la selezione." << endl;
	printArray(a, 0, L);

	/*
	 * Adesso uso le bolle.
	 */
	int b[] = {2,4,3,8,5,3,8,4,6};
	cont = 0;
	bubbleSort(b, 0, L);
	cout << "Dopo il Bubble Sort: " << endl;
	printArray(b, 0, L);

	/*
	 * Adesso uso il merge sort.
	 */
	int c[] = {2,4,3,8,5,3,8,4,6};
	cont = 0;
	mergeSort(c, 0, L);
	cout << "Dopo il Merge Sort: " << endl;
	printArray(c, 0, L);
}

/*
 * Nell'ordinamento a selezione andiamo a selezionare ogni volta solo l'elemento minore
 * tra tutto l'array non ancora ordinato e lo mettiamo al giusto posto.
 */
void selectionSort(int *a, int start, int end) {
	// Rappresenta il numero di comparazioni che sono state fatte.
	int cont = 0;

	for(int i = start; i < end; i++) {
		// Rappresenta l'indice dove si trova l'elemento minore tra tutti.
		int min = i;

		// Se trovo un nuovo minore lo sostituisco.
		for(int j = i; j < end; j++, cont++)
			if(a[j] < a[min])
				min = j;

		// Metto il minore dove deve stare.
		swap(a[i], a[min]);
		printArray(a, start, end);
	}
}

/*
 * Nell'ordinamento a bolle spostiamo ogni volta gli elementi che rispettano il confronto.
 * In questo modo, come delle "bolle", saliranno o scenderanno all'interno dell'array.
 * Quindi possiamo mano a mano considerare sempre delle porzioni inferiori dell'array, di
 * fatto risparmiando tempo prezioso.
 */
void bubbleSort(int *a, int start, int end) {
	// Variabili come sopra.
	int flag = 0, cont = 0;

	for(int i = start; i < end - 1; i++) {
		for(int j = start; j < end - 1 - i + start; j++, cont++)
			// Scambio due valori non appena mi accorgo che sono disordinati.
			if(a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		printArray(a, start, end);
	}
}

void merge(int *a, int l, int m, int r) {
	// Size of left and right sub-arrays.
	int sl = m - l + 1, sr = r - m;

	int la[sl], ra[sr];
	// Fill left and right sub-arrays.
	for(int i = 0; i < sl; i++)
		la[i] = a[l + i];

	for(int i = 0; i < sr; i++)
		ra[i] = a[m + 1 + i];


	int k = l, i = 0, j = 0;
	// Merge temp arrays to real array.
	for(; i < sl && j < sr; k++)
		if(la[i] <= ra[j]) {
			a[k] = la[i];
			i++;
		} else {
			a[k] = ra[j];
			j++;
		}

	while(i < sl) {       //extra element in left array
		a[k] = la[i];
		i++; 
		k++;
	}

	while(j < sr) {     //extra element in right array
		a[k] = ra[j];
		j++; 
		k++;
	}
}

/*
 * Nel merge sort dividiamo l'array di elementi da ordinare in due sotto-array, in modo che
 * sia più facile ordinarli. Continuo fino a che non posso più dividerli e poi torno a riunirli.
 * Notare come sia una soluzione ricorsiva.
 */
void mergeSort(int *a, int l, int r){
	if(l < r) {
   		// Calcolo la metà.
	    int m = l + (r - l) / 2;

	    // Richiama il merge su parti più piccole dell'array.
	    mergeSort(a, l, m);
	    mergeSort(a, m + 1, r);

	    // Unifico gli array.
	    merge(a, l, m, r);
	    printArray(a, l, r);
   }
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

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
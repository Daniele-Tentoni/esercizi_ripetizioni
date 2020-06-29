#include<iostream>
using namespace std;

/*
 * Questa funzione scorre tutti gli elementi dell'array
 * passato come parametro arr compresi tra gli indici
 * start ed end il numero num.
 */
int search(int arr[], int start, int end, int num) {
	for(int i = start; i < end; i++) {
		if(arr[i] == num)
			return i;
	}

	return -1;
}

/*
 * Cosa fa questa funzione?
 */
int binarySearch(int arr[], int p, int r, int num) {
	if(p <= r) {
		int mid = (p + r) / 2;
		if(arr[mid] == num)
			return mid;

		if(arr[mid] > num)
			return binarySearch(arr, p, mid - 1, num);

		if(arr[mid] > num)
			return binarySearch(arr, mid + 1, r, num);
	}

	return -1;
}

int main() {
	int arr[] = {1, 3, 5, 6, 10, 12, 14, 17, 19, 20}; // 10 elements.
	
	int elem;
	cout << "Cerca un numero dentro all'array: ";
	cin >> elem;

	int index = search(arr, 0, 10, num);
	// int index = binarySearch(arr, 0 , 10, num);
	if(index < 0)
		cout << "Elemento non trovato" << endl;
	else
		cout << "Elemento trovato in posizione " << index << endl;

	return 0;
}
#include <iostream>
#include <climits>

using namespace std;

void printOddRow(int col) {
	// Stampo l'angolo in alto a sinistra.
	cout << "+";
	for(int i = 0; i < col; i++) {
		cout << "\t-\t";
		if(i != col - 1) {
			cout << "+";
		}
	}
	// Stampo l'angolo in alto a destra.
	cout << "+" << endl;
}

void printMatrix(int a[][5], int row, int col) {
	printOddRow(col);
	for(int i = 0; i < row; i++) {
		cout << "|";
		for(int j = 0; j < col; j++) {
			cout << "\t" << a[i][j] << "\t";
			if(j != col - 1) {
				cout << "|";
			}
		}
		cout << "|" << endl;
		if(i != row - 1) {
			printOddRow(col);
		}
	}
	printOddRow(col);
}

int main() {
	/*
	 * Data una matrice quadrata, trova gli indici e il valore della
	 * componente più grande e più piccola.
	 */
	int n;
	cout << "Inserire numero di righe e colonne (max 5)" << endl;
	cin >> n;

	/*
	 * Devo dichiarare la matrice con tutte le dimensioni fisse tranne la
	 * prima per poterle gestire come argomenti nelle funzioni.
	 */
	int matrix[n][5];

	/*
	 * Riempio la matrice con dei valori casuali e poi la stampo.
	 */
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			matrix[i][j] = rand() % 100;
	printMatrix(matrix, n, n);

	/*
	 * Confronto tutti gli elementi della matrice alla ricerca di quello
	 * maggiore. A quel punto ne salvo le coordinate.
	 */
	int max = INT_MIN, maxi = 0, maxj = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(matrix[i][j] > max) {
				max = matrix[i][j];
				maxi = i;
				maxj = j;
			}

	/*
	 * Stampo le coordinate e il valore massimo.
	 */
	cout << "Max: " << max << " at [" << maxi << "]x[" << maxj << "]" << endl;
	return 0;
}
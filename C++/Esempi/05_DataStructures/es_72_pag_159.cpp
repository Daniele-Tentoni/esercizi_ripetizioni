#include <iostream>
#include <climits>
#define COL 5

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

void printMatrix(int a[][COL], int row, int col) {
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
	cout << "Inserire numero di righe e colonne" << endl;
	cin >> n;

	/*
	 * Devo dichiarare la matrice con tutte le dimensioni fisse tranne la
	 * prima per poterle gestire come argomenti nelle funzioni.
	 */
	int m1[n][COL], m2[n][COL];
	/*
	 * Riempio la matrice con dei valori casuali e poi la stampo.
	 */
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			m1[i][j] = rand() % 100;
	/*
	 * Riempio la matrice con dei valori casuali e poi la stampo.
	 */
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			m2[i][j] = rand() % 100;
	printMatrix(m1, n, n);
	printMatrix(m2, n, n);

	for(int a = 0; a < n; a++)
		for(int b = 0; b < n; b++)
			for(int c = 0; c < n; c++)
				for(int d = 0; d < n; d++)
					if(m1[a][b] == m2[c][d]) 
						cout << "Trovato valore " << m1[a][b] << " in posizione [" << a << "][" << b << "] e [" << c << "][" << d << "]" << endl;

	return 0;
}
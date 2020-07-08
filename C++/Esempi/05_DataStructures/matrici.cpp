#include <iostream>
#define ROW 5
#define COL 4

using namespace std;

void printMatrix(int a[][COL], int row, int col) {
	for(int i = 0; i < row; i++) {
		cout << "[";
		for(int j = 0; j < col; j++) {
			cout << a[i][j];
			if(j != col - 1) {
				cout << ", ";
			}
		}
		cout << "]" << endl;
	}
}

int main() {
	int matrix[5][4];

	cout << "Azzero righe e colonne" << endl;
	for(int i = 0; i < ROW; i++) {
		for(int j = 0; j < COL; j++) {
			matrix[i][j] = 0;
		}
	}

	cout << "Adesso procediamo con il caricamento della matrice 5x4" << endl;
	for(int i = 0; i < ROW; i++) {
		for(int j = 0; j < COL; j++) {
			cout << "Inserisci l'elemento [" << i << "]x[" << j << "]" << endl;
			cin >> matrix[i][j];

			printMatrix(matrix, ROW, COL);
		}
	}
	return 0;
}
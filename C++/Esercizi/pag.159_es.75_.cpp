#include <iostream>
using namespace std ;
#define COL 5 

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


int main ()
{
	int righe ;
	cout << " Digitare numero desiderato di righe : " ;
	cin >> righe ;
	
	int numeri [righe][COL] ;
	
	cout << "Adesso procediamo con il caricamento della matrice "<<righe<<" x "<<COL<< endl;
	for(int i = 0; i < righe; i++) 
	{
		for(int j = 0; j < COL; j++)
		{
			cout << "Inserisci l'elemento [" << i << "]x[" << j << "]" << endl;
			cin >> numeri [i][j];
		}
	}
	
	printMatrix (numeri , righe , COL ) ;
	
	int max ;
	int min ;
	
	for ( int z = 0 ; z < righe ; z++ )
	{
		max = numeri [z][0] ;
		min = numeri [z][0] ;
		
		for ( int y = 0 ; y < COL ; y++ )
		{
			
			if ( numeri [z][y] > max )
			max = numeri [z][y] ;
			
			if ( numeri [z][y] < min )
			min = numeri [z][y]  ;
		
		}
	
	cout << " Riga esaminata : "<<z<<"  -  "<<"Valore massimo trovato = "<<max<<"  -  "<<"Valore minimo trovato = "<<min<<endl ;
	}
}

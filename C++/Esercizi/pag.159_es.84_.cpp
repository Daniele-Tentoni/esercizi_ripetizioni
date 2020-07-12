#include <iostream>
using namespace std ;
#define COL 6

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
	
	cout << " - Adesso procediamo con il caricamento della matrice  -  "<< endl;
	for(int i = 0; i < righe; i++) 
	{
		for(int j = 0; j < COL; j++)
		{
			cout << "Inserisci l'elemento [" << i << "]x[" << j << "]" << endl;
			cin >> numeri [i][j];
		}
		cout << endl ;
	}
	
	printMatrix (numeri , righe , COL ) ;
	
	// controllo matrice
	
	for (int z = 0 ; z < righe ; z++)
	{
		for ( int w = 0 ; w < COL ; w++)
		{
			
			if ( w % 2 == 0 )
			{
				if ( numeri [z][w] >= -3 )
				{
					if ( numeri [z][w]<= 25 )
					{
						cout << " Il numero in posizione "<<z<<" X "<<w<<" e' corretto "<<endl ;
					}
				}
			}
			
			else if (w % 2 == 1 )
			{
				if ( numeri [z][w] % 3 == 0 )	
				{
					cout << " Il numero in posizione "<<z<<" X "<<w<<" e' corretto "<<endl ;	
				}
			}
		}
	}
	
}

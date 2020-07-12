#include <iostream>
using namespace std ;
#define COL 10

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
	
	int righe , controlloOrdine ;
	int controlloConferma = 0 ;
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
	
		for (int z = 0 ; z < righe ; z++)
	{
		controlloOrdine = numeri [righe][0] ;
		
		for ( int w = 0 ; w < COL ; w++)
		{
			if (controlloOrdine >= numeri [z][w])
			{
				controlloOrdine = numeri [z][w] ;
			}
			
			
			
			else 
			{
			cout << "Errore trovato in posizione "<<z<<" X "<<w<<endl ;
			controlloConferma ++ ;
			break ;	
			}		
		}

	}
	
	if ( controlloConferma == 0)
	cout << " Complimenti! Le righe della matrice sono ordinate in modo decrescente - " ;

}

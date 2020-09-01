#include <iostream>
using namespace std ;
#define COL 12
#define ROW 10

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
	
	int vendite [ROW][COL] ;

	
	cout << " - Adesso procediamo con il caricamento delle vendite mensili dei 10 prodotti -  "<< endl;
	for(int i = 0; i < ROW; i++) 
	{
		for(int j = 0; j < COL; j++)
		{
			cout << "Inserisci le vendite del " << i+1 << "' prodotto durante il " << j+1 << "' mese : " << endl;
			cin >> vendite [i][j];
		}
	}
	
	printMatrix (vendite , ROW , COL ) ;
	
	for (int z = 0 ; z < ROW ; z++ )
	{
		int sommaAnnua = 0 ;
		
		for (int w = 0 ; w < COL ; w++ )
		{
			sommaAnnua = sommaAnnua + vendite [z][w] ;
		}
		
		cout <<"Media di vendite del "<<z+1<<"' prodotto = "<<(float)sommaAnnua/12<<endl ;
	}
		
	
}





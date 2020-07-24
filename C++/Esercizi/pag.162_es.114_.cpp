#include <iostream>
#include<ctime>
#include<cstdlib>
#include<math.h>
#define COL 4
#define ROW 4
using namespace std ;

struct valoreCoordinate
{
	int valore ;
	int numRow ;
	int numCol ;
} ;
int trovaNumeroRandom ( int intervallo )
{
	int numeroScelto ;
	//srand(time(NULL));
 	numeroScelto = rand()%intervallo ; 
 	return numeroScelto ;
}
void AutomatiRiempiMatrix ( int a [ROW][COL], int row , int col , int intervalloRandomico ) {

cout << "Adesso procediamo con il caricamento automatico casuale della matrice "<<ROW<<" x "<<COL<< endl;
	for(int i = 0; i < ROW; i++) 
	{
		for(int j = 0; j < COL; j++)
		{
			cout << "Inserisco l'elemento [" << i << "]x[" << j << "]" << endl;
		 a [i][j] = trovaNumeroRandom ( intervalloRandomico ) ;
		}
	}
}
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

void printArray ( valoreCoordinate a [] , int lenght )
{

	for ( int r = 0 ; r < lenght ; r++)
	{
		cout << " ROW " << a[r].numCol << " - ";
		cout << " COL " << a[r].numRow << " - "  ;
		cout << " VALUE " << a[r].valore <<endl ;
	}
}



void proceduraInserimentoArray ( valoreCoordinate array [] , int matrice [ROW][COL] , int row , int col )
{
	
	int contatore = 0 ;
	for(int i = 0; i < row; i++) 
	{
		for(int j = 0; j < col; j++)
		{
			cout << "Inserisco l'elemento [" << i << "]x[" << j << "]" << endl;
			if ( matrice [i][j]!=0)
			{
				array[contatore].numRow = j ;
				array[contatore].numCol = i ;
				array[contatore].valore = matrice [i][j] ;	
			}
			else 
			{
				array[contatore].numRow  = j ;
				array[contatore].numCol  = i ;
				array[contatore].valore  = 999 ;
			}	
		contatore ++ ;
				
		}
		
	}
	
	printArray ( array , ROW*COL ) ;
	
}


int main () 
{

	int intervalloRandomico = 2 ;

	int matrice01 [ROW][COL] ;

	AutomatiRiempiMatrix ( matrice01 , ROW , COL , intervalloRandomico ) ;
	
	printMatrix (matrice01 , ROW , COL ) ;	
	
	valoreCoordinate arrayNumeri [ROW * COL] ;
	
	proceduraInserimentoArray ( arrayNumeri , matrice01 , ROW , COL ) ;


}

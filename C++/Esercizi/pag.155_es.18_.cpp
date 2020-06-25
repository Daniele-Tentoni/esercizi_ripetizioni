#include <iostream>
using namespace std ;

int main ()
{
	int N ;
	do 
	{
	cout << "Inserire lunghezza del vettore : "	<<endl ;
	cin >> N ;
	} while ( N < 0) ;
	
	int vettoreNumeri [ N ] ;
	
	int indiceVarMax ;
	int variabileMassima = INT_MIN ;
	int indiceVarMin ;
	int variabileMinima = INT_MAX ;
	
	for ( int i = 0 ; i < N ; i++)
	{
			cout << "Digitare "<<( i + 1)<<"' numero del vettore  : " ;
		cin >> vettoreNumeri [ i ];
	}
	
	for ( int j = 0 ; j < N ; j++)
	{
		
		if ( vettoreNumeri [ j ] >= variabileMassima )
		{
			indiceVarMax = j ;
			variabileMassima = vettoreNumeri [ j ] ;	
		}
		
		else 
		{
			continue ;
		}
			
	}
	
		for ( int z = 0 ; z < N ; z++)
	{
		
		if ( vettoreNumeri [ z ] <= variabileMinima )
		{
			indiceVarMin = z ;
			variabileMinima = vettoreNumeri [ z ] ;	
		}
		
		else 
		{
			continue ;
		}
			
	}
	
		cout << "Numero Max = "<<variabileMassima<<"   "<<"indice numero Max = "<<indiceVarMax<<endl ;
		cout <<" Numero Min = "<<variabileMinima<<"   "<<"indice numero Min = "<<indiceVarMin<<endl ;
	
}

#include <iostream>
using namespace std;

int main ()
{
	
	int N ;
	
	do 
	{
	cout << "Inserire quantita' di numeri che si vogliono calcolare fino ad un massimo di 100 unita' : "	<<endl ;
	cin >> N ;
	} while ( N >= 100) ;
		
	int numeriInseriti [ N ] ;
	int numeriElevati [ N ] ;
	int differenze [ N ] ;
	
	for ( int i = 0 ; i < N ; i++ )
	{
		cout << "Digitare "<<( i + 1)<<"' numero : " ;
		cin >> numeriInseriti [ i ];
		
		numeriElevati [ i ] = numeriInseriti [ i ] * numeriInseriti [ i ] ;
		
		differenze [ i ] = numeriElevati [ i ] - numeriInseriti [ i ] ;	
	}
	
	for ( int i = 0 ; i < N ; i++ )
	{
			cout << "la differenza tra il quadrato del "<< (i + 1) << "' numero e del " << ( i + 1) << "' numero e' : "<<differenze [ i ]<<endl ;
	}
	
	system ( "pause") ;
	
}

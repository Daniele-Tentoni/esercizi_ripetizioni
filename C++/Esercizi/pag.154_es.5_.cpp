#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	
	int numeriDaConsiderare ;
	float sommaDispari = 0 ;
	
	cout << " Digitare numeri di N che si vogliono considerare : "<<endl ;
	cin >> numeriDaConsiderare ;
	int numeriDigitati [10] ;
	
	for (int i = 0 ; i < numeriDaConsiderare ; i ++)
	{
		
		cout << "Inserire numero del "<< ( i+1 ) << "' slot "<<endl ;
		cin >> numeriDigitati [i];
		
		if ( (i % 2) == 1)
		{
			sommaDispari = sommaDispari + ( numeriDigitati [ i ] * numeriDigitati [ i ] );
		}	
	}
	
	cout << "cifra totale dispari = "<<sqrt(sommaDispari)<<endl ;
	
	
	
	
	
	
	
}

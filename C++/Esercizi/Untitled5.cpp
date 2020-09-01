#include <iostream>
#include <cmath>
using namespace std ;

void funzionePotenza ( int base, int esponente)
{
	for ( int i = 0 ; i < esponente-1 ; i++)
	{
		if ( i == 0 )
		base = base * base ;
		if ( i != 0 )
		base = base * sqrt(base) ;
	}
	
	cout<<" risultato della potenza = "<<base<<endl ;
}

int main ()
{
	int b, e ;
	cout << " Digitare la base della potenza - "<<endl ;
	cin >> b ;
	cout << " Digitare l'esponente della potenza - "<<endl ;
	cin >> e ;
	
	funzionePotenza ( b , e );
	
}

#include <iostream>
#include <cmath>
using namespace std ;

int funzionePotenza ( int base, int esponente)
{
//	int risultato ;
	for ( int i = 0 ; i < esponente-1 ; i++)
	{
		if ( i == 0 )
		base = base * base ;
		if ( i != 0 )
		base = base * sqrt(base) ;
	}
	
	return base ;
}

int main ()
{
	int b, e , risultato  ;
	cout << " Digitare la base della potenza - "<<endl ;
	cin >> b ;
	cout << " Digitare l'esponente della potenza - "<<endl ;
	cin >> e ;
	
	risultato = funzionePotenza ( b , e );
		cout<<" risultato della potenza = "<<risultato<<endl ;
}

#include <iostream>
using namespace std ;

int funzionePotenza ( int base, int esponente)
{
//	int risultato ;

	int baseFissa = base ;
	for ( int i = 0 ; i < esponente-1 ; i++)
	{
		if ( i == 0 )
		base = base * baseFissa ;
		if ( i != 0 )
		base = base * baseFissa ;
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

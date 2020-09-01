#include <iostream>
using namespace std ;

int funzionePotenza ( int base, int esponente)
{
//	int risultato ;

	if ( esponente == 0 )
	
	base = 1 ;

	int baseFissa = base ;
	
	if (esponente != 0 )
	{
		for ( int i = 0 ; i < esponente-1 ; i++)
		{
			base = base * baseFissa ;
		}	
	}
	return base ;
}

int funzionePotenzaRicorsiva ( int base, int esponente ) {
	if ( esponente == 0 )
		return base = 1 ;
	return base * funzionePotenzaRicorsiva ( base , esponente-1) ;				
}

int main ()
{
	int b, e , risultato  ;
	cout << " Digitare la base della potenza - "<<endl ;
	cin >> b ;
	cout << " Digitare l'esponente della potenza - "<<endl ;
	cin >> e ;
	
	risultato = funzionePotenzaRicorsiva ( b , e );
		cout<<" risultato della potenza = "<<risultato<<endl ;
}

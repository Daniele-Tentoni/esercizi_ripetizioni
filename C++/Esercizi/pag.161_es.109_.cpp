#include <iostream>
#include <string.h>
using namespace std ;


struct identita 
{
	string nome ;
	string cognome ;
	string CF ;
	string comune ;	
} ;

void compareComune ( identita a[] , int lenght )
{
	int contatore = 0 ;
	for ( int j = 0 ; j < lenght ; j++ )
	{
		if (a[j].comune=="cesena")
		{
			cout << "Trovato cittadino di nome :"<<a[j].nome<<"  e cognome : "<<a[j].cognome<<" nato a "<<a[j].comune<<endl ;
			contatore ++ ;
		}
		
	}
	if ( contatore == 0 )
	cout << "Nessun concittadino trovato , mi dispiace "<<endl ;	
}

void compareCodiceFiscale ( identita a[] , int lenght , string nomeCercato , string cognomeCercato )
{
	int contatore = 0 ;
	for ( int j = 0 ; j < lenght ; j++ )
	{
		if (a[j].nome==nomeCercato && a[j].cognome==cognomeCercato )
		{
			cout << "Trovato cittadino di nome :"<<a[j].nome<<"  e cognome : "<<a[j].cognome<<" con Codice Fiscale = "<<a[j].CF<<endl ;
			contatore ++ ;
		}
		
	}
	if ( contatore == 0 )
	cout << "Nessun cittadino trovato , mi dispiace "<<endl ;	
}



int main ()
{
	cout << " Di quante persone vuoi inserire i dati ? - " ;
	int N ;
	cin >> N ;
	
	identita persone [ N ] ;
	for ( int i = 0 ; i < N ; i++)
	{
		cout << "Inserire nome : " ;
		cin >> persone[i].nome ;
		cout << "Inserire cognome : " ;
		cin >> persone[i].cognome ;		
		cout << "Inserire codice fiscale : " ;
		cin >> persone[i].CF ;		
		cout << "Inserire Comune di nascita : " ;
		cin >> persone[i].comune  ;
	}

	compareComune (persone , N ) ;
	
	string nomeCercato ;
	cout << " Inserire NOME della persona di cui si vuole avere il CF : " ;
	cin >> nomeCercato ;
	string cognomeCercato ;
	cout << " Inserire COGNOME della persona di cui si vuole avere il CF : " ;
	cin >> cognomeCercato ;
	
	compareCodiceFiscale(persone , N , nomeCercato , cognomeCercato ) ;
	
	// e qui dovrei fare la parte dove mi chiede di sistemarli in ordine alfabetico 
	
	
	
	
	


	
}

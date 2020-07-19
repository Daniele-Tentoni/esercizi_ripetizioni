#include <iostream>
#include <string>
#include <string.h>

using namespace std ;

struct giacenze
{
	char codice [5] ;
	char descrizione [40] ;
	float scortaMinima ;
	float rimanenzeIniziali ;
	float totaleEntrate ;
	float totaleUscite ;
} ;

struct scorte
{
	char codice [5] ;
	char descrizione [40] ;
	float giacenzaAttuale ;	
} ;

void printGiacenze(giacenze a) {
	cout << "{"<<" _ " << a.codice << ", " << a.descrizione << ", " << a.scortaMinima << ", " << a.rimanenzeIniziali <<  ", " << a.totaleEntrate << ", " << a.totaleUscite<<" _ "<< "}" << endl;
}

void printScorte(scorte a) {
	cout << "{"<<" _ " << a.codice << ", " << a.descrizione << ", " << a.giacenzaAttuale <<" _ "<< "}" << endl;
}

void printArrayGiacenze(giacenze a[], size_t start, size_t end) {
	cout << "[" << endl;
	for(size_t i = start; i < end; i++)
	{
		 printGiacenze(a[i]);
		
		if(i != end - 1) 
		{
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

void printArrayScorte(scorte a[], size_t start, size_t end) {
	cout << "[" << endl;
	for(size_t i = start; i < end; i++)
	{
		 printScorte(a[i]);
		
		if(i != end - 1) 
		{
			cout << ", ";
		}
	}
	cout << "]" << endl;
	
	}


void conteggioGiacenza ( scorte prodottiAggiornati [] , giacenze prodottiRegistrati [] , int N )
{
	for ( int z = 0 ; z < N ; z++ )
{
	float calcoloGiacenza = prodottiRegistrati[z].rimanenzeIniziali + prodottiRegistrati[z].totaleEntrate - prodottiRegistrati[z].totaleUscite ;
	if (calcoloGiacenza < prodottiRegistrati[z].scortaMinima)
		{
			strcpy ( prodottiAggiornati[z].codice , prodottiRegistrati[z].codice ) ;
			strcpy ( prodottiAggiornati[z].descrizione , prodottiRegistrati[z].descrizione ) ;
			prodottiAggiornati[z].giacenzaAttuale = calcoloGiacenza ;
		}
		
	else
	{
	prodottiAggiornati[z].codice = "000" ;
	prodottiAggiornati[z].descrizione = "000" ;
	prodottiAggiornati[z].giacenzaAttuale = "000" ;
	}
}
	
}




int main ()
{

	cout << " Di quanti prodotti vuoi inserire i dati ? - ";
	int N;
	cin >> N;
	
	giacenze prodottiRegistrati [N];
	
	for (int i = 0 ; i < N ; i++)
	{
		cout << "Inserire Codice "<<i+1<<" : ";
		cin >> prodottiRegistrati[i].codice;
		cout << "Inserire Descrizione "<<i+1<<" : ";
		cin >>  prodottiRegistrati[i].descrizione;		
		cout << "Inserire Scorta Minima "<<i+1<<" : ";
		cin >>  prodottiRegistrati[i].scortaMinima;
		cout << "Inserire Rimanenze Iniziali "<<i+1<<" : ";
		cin >>  prodottiRegistrati[i].rimanenzeIniziali;		
		cout << "Inserire Totale Entrate "<<i+1<<" : ";
		cin >>  prodottiRegistrati[i].totaleEntrate ;
		cout << "Inserire Totale Uscite "<<i+1<<" : ";
		cin >>  prodottiRegistrati[i].totaleUscite ;
	}

printArrayGiacenze (prodottiRegistrati , 0 , N ) ;


scorte prodottiAggiornati [N] ;

conteggioGiacenza ( prodottiAggiornati , prodottiRegistrati , N ) ;

printArrayScorte (prodottiAggiornati , 0 , N ) ;

}


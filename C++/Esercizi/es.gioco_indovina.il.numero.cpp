#include<iostream>
#include<ctime>
#include<cstdlib>
#include<math.h>
using namespace std ;

int trovaNumeroRandom ( int intervallo )
{
	int numeroScelto ;
	srand(time(NULL));
 	numeroScelto = rand()%intervallo+1 ; 
 	return numeroScelto ;
}

int confrontaNumero ( int numeroGiusto )
{
	int flag = 0 ;
	int proposta ;
	cout << " Scrivimi il numero che stai pensando e ti diro' se e' quello giusto - "<<endl ;
	cin >> proposta ;
	
	if (proposta > numeroGiusto)
	{
		cout << " Spiacente ! Il numero proposto e' MAGGIORE del numero esatto - "<<endl ;	
		flag = 0 ;
	}	
	if (proposta < numeroGiusto)
	{
		cout << " Spiacente ! Il numero proposto e' MINORE del numero esatto - "<<endl ;	
		flag = 0 ;
	}
	if (proposta == numeroGiusto)
	{
		cout << "Complimenti! Hai indovinato! "<<endl ;	
		flag = 1 ;		
	}
	
	return flag ;
	
}



int main()
{		
	
	int intervallo , numeroGiusto , segno ;
	cout << " In che range di numeri vuoi provare ad indovinare ? - scrivilo ora - " ;
	cin >> intervallo ;
	
	numeroGiusto = trovaNumeroRandom ( intervallo ) ;
	cout << numeroGiusto << " poi da cancellare questa cosa "<<endl ;
	int tentativi =  log2(intervallo) ;
	
	cout << " Ora dovrai indovinare il numero scelto con un massimo di "<<tentativi<< " tentativi - "<<endl ;
	cout << endl ;
	
	for (int i = 0 ; i < tentativi ; i++ )
	{
		
	segno =	confrontaNumero ( numeroGiusto ) ;
	
	if ( segno == 1 )
	break ;	
			
	}
	if ( segno == 0)
		cout << " Ho vinto! Non sei riuscito ad indovinare il numero ! "<<endl ;	
	}
	

 	
 	
 	
 	
 	


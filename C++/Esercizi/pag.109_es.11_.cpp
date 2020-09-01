#include <iostream>
using namespace std ;

int funzioneComparePrecedenti (int N , int tot )
{	
		
	if ( N > tot )
	{
		tot = tot + N ;	
		cout << " Il numero inserito "<< N <<" e' MAGGIORE della somma dei precedenti = "<<tot<<endl ;		
	}
	else 
	{
		tot = tot + N ;
		cout << " Il numero inserito "<< N <<" e' MINORE della somma dei precedenti = "<<tot<<endl ;
	}	
	return tot ;		

}
int main (){
	
	int N ;
	int tot = 0 ;
	
	do
	{
		cout << " Inserire numero - Inserire 0 se si vuole terminare il calcolo - " ;
		cin >> N ;
		
		tot = funzioneComparePrecedenti ( N , tot ) ;	
				
	}while ( N != 0 ) ;
	
}
	
	


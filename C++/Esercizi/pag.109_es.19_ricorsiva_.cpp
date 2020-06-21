#include <iostream>
using namespace std ;

int Elevazione ( int base, int esponente)
{
	if (esponente == 0)
	return 1 ;
	
	return base * Elevazione (base , esponente - 1);
}

int main ()
{
	
	int base , esponente, risultato ;
	
	cout << "inserire base"<<endl ;
	cin >> base ;
	cout << "inserire esponente"<<endl ;
	cin >> esponente ;
	
	risultato = Elevazione ( base , esponente) ;
	
	cout << "il risultato e'  :  "<<risultato<<endl ;
	
	
	
	
}

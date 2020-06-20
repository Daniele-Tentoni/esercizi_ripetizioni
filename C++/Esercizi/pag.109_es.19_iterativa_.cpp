#include <iostream>
using namespace std ;

int Elevazione ( int risultato , int num )
{
	risultato = risultato * num ; 
	
	return risultato ; 
	
}

int i = 0 ;

int main ()
{
int num ;
int esp ;
int risultato ;

	
cout << "Inserire numero da elevare :  "<<endl ;
cin >> num ;
cout << "Inserire esponente :  "<<endl ;
cin >> esp ;

if ( esp == 0)
{
	risultato = 1 ;

}

while (i < esp)
{

if ( i == 0)
{
	risultato = num ;
	i ++ ;
	}	
	
	else 
	{
	risultato = Elevazione (risultato , num ) ;
	i ++ ;
	}
	
	cout << "il numero elevato alla "<< i <<"  :  " <<risultato << endl ;
}

cout << "il risultato finale e'  :  " <<risultato << endl ;

}

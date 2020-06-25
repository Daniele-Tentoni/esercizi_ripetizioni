#include <iostream>
using namespace std ;

int main ()
{
	int N ;
	do 
	{
	cout << "Inserire lunghezza dei due vettori - fino ad un massimo di 50 unita' : "	<<endl ;
	cin >> N ;
	} while ( N > 50) ;
		
	int vettoreA [ N ] ;
	int vettoreB [ N ] ;
	int vetDiff [ N ] ;
	int vetSomma[ N ] ;
	
	
	for ( int i = 0 ; i < N ; i++ )
	{
		cout << "Digitare "<<( i + 1)<<"' numero del vettore A : " ;
		cin >> vettoreA [ i ];
		cout << "Digitare "<<( i + 1)<<"' numero del vettore B : " ;
		cin >> vettoreB [ i ];
		
		vetDiff [ i ] = vettoreA [ i ] - vettoreB [ i ] ;
		vetSomma [ i ] = vettoreA [ i ] + vettoreB [ i ] ;	
	}
	
	for ( int i = 0 ; i < N ; i++ )
	{
			cout << "la differenza tra A e B della "<< (i + 1) << "' posizione e' : "<<vetDiff [ i ]<<endl ;
			cout << "la somma tra A e B della "<< (i + 1) << "' posizione e' : "<<vetSomma [ i ]<<endl ;
	}
	
	
}

#include <iostream>
using namespace std ;

int main ()

{
	
int n1 , n2 ,nSomma , risultato ;

cout << "inserire n1 = " ;
cin  >> n1 ;
cout << "inserire n2 = " ;
cin  >> n2 ;

nSomma = n1 ;
risultato = 0 ;

while ( nSomma <= n2 )
{
	risultato = risultato + nSomma ;
	
	nSomma ++ ;
	
}

cout << "il risulato e' = "<<risultato<<endl ;
		
}

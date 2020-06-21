#include <iostream>
using namespace std ;


int Divisione (int num , int den, int quoz )
{

while (num>=den) {

	
	num = num - den ;
	quoz ++ ;
	
}
 

	
cout << " quoziente =  " << quoz << endl ;	
		
	
	
	return quoz ;
}


int main ()

{
	
int risultato , a , b ;

cout << " inserire numeratore = ";
cin >> a ;
cout << " inserire denominatore = " ;
cin >> b ;
 

risultato = Divisione ( a ,  b ,  risultato ) ;	
		
}

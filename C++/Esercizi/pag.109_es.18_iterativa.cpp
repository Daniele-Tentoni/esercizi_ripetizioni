#include <iostream>
using namespace std ;


int DivisioneIter (int num, int den)
{
	int quoz;
	while (num>=den) {
		num = num - den ;
		quoz ++ ;
	}	
	cout << " quoziente =  " << quoz << endl ;	
	return quoz;
}

int DivisioneRic(int num, int den) {
	if(num < den)
		return 0;

	int newNum = num - den;
	int risultato = DivisioneRic(newNum, den);
	return 1 + risultato;
}

int main ()

{
	
int risultato , a , b ;

cout << " inserire numeratore = ";
cin >> a ;
cout << " inserire denominatore = " ;
cin >> b ;
 

risultato = DivisioneRic ( a ,  b) ;	
		cout << "risultato: " << risultato << endl;
}

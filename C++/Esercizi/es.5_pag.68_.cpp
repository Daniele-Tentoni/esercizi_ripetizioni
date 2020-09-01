#include <iostream>
using namespace std;
int main (){

	int nLire ;
	char moneta ;
	cout << "inserire importo in lire"<<endl ;
	cin >> nLire ;
	cout << "selezionare la valuta di cambio"<<endl ;
	cin >> moneta ;
	
	if (moneta=='€') {
		float cambioEuro = nLire/2000 ;
		cout << "il numero di lire inserite corrisponde a :  €"<< cambioEuro<<endl ;
		
	}
	
	else if (moneta=='$'){
		float cambioDollari = nLire/2500 ;
		cout << "il numero di lire inserite corrisponde a :  $"<< cambioDollari<<endl ;
	}
	
	else 
	cout << "la valuta inserita non e' accettata"<<endl ;
	
	system ("pause");
	
}




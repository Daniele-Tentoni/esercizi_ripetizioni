#include <iostream>
using namespace std ;
int main (){
	
	cout << "Digitare orario di entrata ed uscita utilizzando orario compreso tra 0 e 24"<<endl ;
	cout << "Lunedi = 0"<<endl<<"Martedi = 1"<<endl<<"Mercoledi = 2"<<endl<<"Giovedi = 3"<<endl<<"Venerdi = 4"<<endl<<"Sabato = 5"<<endl<<"Domenica = 6"<<endl ;
	
	int sommaOre ;
	
	
	for ( int i = 0 ; i <= 6 ; i=i+1 ){
		int oraEn , oraUs, oreGiornaliere ;
		cout << "Inserire ora di entrata del giorno"<<" : "<<i<<endl ;
		cin >> oraEn ;
		cout << "Inserire ora di uscita del giorno"<<" : "<<i<<endl ;
		cin >> oraUs ;
		
		oreGiornaliere = oraUs - oraEn ;
		
		sommaOre = sommaOre + oreGiornaliere ;	
	}
	
	cout << "Il totale delle ore da retribuire e' :"<<" "<<sommaOre<<endl;
	
	
	
	
	
	
}

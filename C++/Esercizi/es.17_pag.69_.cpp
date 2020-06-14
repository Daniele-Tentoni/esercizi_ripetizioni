#include <iostream>
using namespace std ;
int main (){

int locazione, metratura ;
float prezzo ;
const int INTERESSI = 1.15 ; 
cout << "inserire locazione dell'appartamento come : "<<endl;
cout << "0 = Centro"<<endl;
cout << "1 = Zona 1"<<endl;
cout << "2 = Zona 2"<<endl;
cout << "3 = Zona 3"<<endl;
cout << "4 = Periferia"<<endl;
cin >> locazione ;
cout << "inserire metratura dell'appartamento : m2  " ;
cin >> metratura ;

switch (locazione){
	
	case 0: 
	prezzo = metratura*1500*INTERESSI ;
	cout << "Il prezzo totale dell'appartamento e' :   "<<prezzo<<endl ;
	break ;
	
	case 1:
	prezzo = metratura*1200*INTERESSI ;
	cout << "Il prezzo totale dell'appartamento e' :   "<<prezzo<<endl ;
	break ;
		
	case 2:
	prezzo = metratura*1400*INTERESSI ;
	cout << "Il prezzo totale dell'appartamento e' :   "<<prezzo<<endl ;
	break ;
		
	case 3:
	prezzo = metratura*1300*INTERESSI ;
	cout << "Il prezzo totale dell'appartamento e' :   "<<prezzo<<endl ;
	break ;
		
	case 4:
	prezzo = metratura*1000*INTERESSI ;
	cout << "Il prezzo totale dell'appartamento e' : € "<<prezzo<<" €"<<endl ;
	break ;
	
	default :
	cout << "la zona selezionata non e' disponibile"<<endl ;
		
}

system ("pause");
return 0;	
}

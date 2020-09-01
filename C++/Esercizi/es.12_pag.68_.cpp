#include <iostream>
using namespace std ;
int main (){
	
int mese, anno ;

cout << "inserire numero del mese: "<<endl;
cin >> mese ;

if (mese==2){
cout << "inserire l'anno': "<<endl;
cin >> anno ;}

	switch (mese) 
	{
		case 1: 
		case 3:
		case 5: 
		case 7: 
		case 8:
		case 10: 
		case 12:
			cout << "il mese ha 31 giorni"<<endl ;
		break ;
	
		case 4: 
		case 6: 
		case 9:
		case 11:
			cout << "il mese ha 30 giorni"<<endl ;
		break ;
		
		case 2:
			if (anno%4==0)
		cout << "il mese ha 29 
		giorni"<<endl ;
			else
		cout << "il mese ha 28 giorni"<<endl ;
		break;
		
		default :
		cout << "non hai selezionato un mese esistente" <<endl ;		
}

system ("pause");
}

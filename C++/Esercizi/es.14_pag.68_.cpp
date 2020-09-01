#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int a, b, richiesta ;
	float perimetro , area, diagonale ;
	cout << "valore del lato a: "<<endl ;
	cin >> a ;
	cout << "valore del lato b: "<<endl ;
	cin >> b ;
	cout << "digitare calcolo richiesto come :"<<endl;
	cout << "1 = perimetro"<<endl;
	cout << "2 = area"<<endl;
	cout << "3 = diagonale"<<endl;
	cin >> richiesta;
	
	switch (richiesta){
		case 1:
		perimetro = (a + b)*2 ;
		cout << "Il perimetro del rettangolo vale :  "<<perimetro<<endl;
		break ;
		
		case 2:
		area = a * b ;
		cout << "L'area del rettangolo vale :  "<<area<<endl;
		break ; 
			
		case 3:
		diagonale = sqrt(a * a + b * b) ;
		cout << "La diagonale del rettangolo vale :  "<<diagonale<<endl;
		break ;
		
		default :
		cout << "l'operazione selezionata non esiste"<<endl;
	}
	
	system ("pause");	
}

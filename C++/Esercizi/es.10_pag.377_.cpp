#include <iostream>
using namespace std;
int main () {
	
 	float voto1;
	float voto2;
	float voto3;
	
	cout << "inserire primo voto\n";
	cin >> voto1;		 
	cout << "inserire secondo voto\n";
	cin >> voto2;
	cout << "inserire terzo voto\n";
	cin >> voto3;
	
	double media = (voto1+voto2+voto3)/3 ;
	
	cout << "la media dei voti e':  ";
	cout << media;
	
}

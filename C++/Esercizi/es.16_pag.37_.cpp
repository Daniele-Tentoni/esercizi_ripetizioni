#include <iostream>
using namespace std;
int main () {

	int giorni, ore, minuti, secondi ;
	
	cout << "inserire giorni"<<endl ;
	cin	>> giorni ;
	cout << "inserire ore"<<endl ;
	cin	>> ore ;
	cout << "inserire minuti"<<endl ;
	cin	>> minuti ;
	cout << "inserire secondi"<<endl ;
	cin	>> secondi ;
	
	int secondiTotali ;
	
	secondiTotali=(giorni * 86400)+(ore * 3600)+(minuti * 60)+(secondi * 1) ;
	
	cout << "Il numero totale di secondi e':  "<<secondiTotali<<endl;
	
	system ("pause");
	
	
	
	
	
	
	
	
	
	
	
}

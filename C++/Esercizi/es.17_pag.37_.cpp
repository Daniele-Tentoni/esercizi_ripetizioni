#include <iostream>
using namespace std;
int main () {
	
	int kgInseriti;
	cout << "digitare i chili di vernice desiderati"<< endl;
	cin >> kgInseriti;
	
	bool z = kgInseriti > 10 ;
	bool x = kgInseriti <=10 ;
	
	int kgDiversi = kgInseriti-10 ;
	
	int adittivo = 100+( kgDiversi * 10) * x + (kgDiversi * 5)* z ;
	
	cout << "la quantita di additivo per la vernice inserita e'  :" << adittivo << "  grammi"<<endl ;
	
	system ("pause");
	


	
	
	
	
	
	
}

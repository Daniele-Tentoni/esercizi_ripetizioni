#include <iostream>
using namespace std;
int main (){
	
	float numero, ec1, dif1, ec2, dif2, ec3, dif3, ec4 ;
	cout << "inserire numero di cui si vuole sapere la radice quadrata\n" ;
	cin >> numero ;
	
	ec1 = numero ;
	dif1 = 2/numero ;
	cout << ec1 <<endl ;
	
	ec2 = (ec1 + dif1)/2 ;
	dif2=2/ec1 ;
	cout << ec2 <<endl;
	
	ec3 = ( ec2 + dif2)/2 ;
	dif3 = 2/ec2 ;
	cout << ec3 <<endl;
	
	ec4=(ec3 + dif3)/2 ;
	
	cout << "la radice del numero inserito e':  " ;
	cout << ec4 <<endl;
	
	system ("pause") ;
	return 0 ;		
	
}

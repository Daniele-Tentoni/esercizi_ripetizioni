#include <iostream>
using namespace std;
int main (){
	
char seq ;
cout << " selezionare sequenza a , b , c , d "<<endl ;
cin >> seq ;

if (seq=='a') {
	int n ;
	for (n=1; n<=99; n=n+2)	{
		cout <<"   " <<n<< "   " ;
	}
}

if (seq=='b') {
	int m=1 ;
	int n=0 ;
	do {
		n = n + m ;
		cout <<"   " <<n<< "   " ;
		m = m + 2 ;
	}while (n <=2500);	
}

if (seq=='c') {
	int n ;
	for (n=1; n<=100; n=n+1){
	int resto = n % 2 ;
	
	if (resto == 1)	
		cout <<"   "<<n<< "   "	;
	if (resto == 0)	
		cout <<"   "<<-n<< "   "; 
	}
}

if (seq=='d') {
	int num = 0 ;
	int den = 1 ;
	do {
		num ++ ;
		den ++ ;
		cout << "  "<<num<<" / "<<den<<"  " ;
	}while (den<100) ;
}
 
 if (seq!='a','b','c','d') 
 cout << "lettera selezionata non esistente"<<endl ;	
	
system ("pause");	
}













	
	
	
	
	
	
	


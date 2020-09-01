#include<iostream>
using namespace std;

float moltiplication ( float a , float b)
{
	
	int ris = 0 ;
	for ( int i=0 ; i < b ; i++)
	{
	
	ris= ris + a ;		
	}
	return ris ;	
}

float division ( float a , float b)
{
int cont = 0 ;	
float somma = 0 ;
while ( a > somma)	
{
	
	somma = somma + b ;
	cont ++ ;	
}

return cont ;
		
}



main()
{
char scelta;
float risultato;
cout<<"che tipo di operazione vuoi fare?, d or m"<<endl;
cin>>scelta;
if (scelta =='m')
{
	float fattore1, fattore2;
	cout<<" fattore1"<<endl;
	cin>>fattore1;
	cout<<" fattore2"<<endl;
	cin>>fattore2;
	risultato = moltiplication ( fattore1 , fattore2) ;
	cout<<"il risultato e':  "<<risultato<<endl ;
	
}
else
{
		float dividendo, divisore;
		cout<<" dividendo"<<endl;
		cin>>dividendo;
		cout<<" divisore"<<endl;
		cin>>divisore;
		risultato = division ( dividendo , divisore) ;
		cout<<"il risultato e':  "<<risultato<<endl ;
}
	
}

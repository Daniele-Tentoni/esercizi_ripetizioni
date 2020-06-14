#include <iostream>
using namespace std;

float capitale ;
int contatoreV , contatoreP , contatoreA ;
float totaleDiVers , totaleDiPrel, totaleDiAss ;


void  Versamento ( float versamento )
{
	
capitale = capitale + versamento ;
contatoreV = contatoreV + 1 ;
totaleDiVers = totaleDiVers + versamento ;

}

void  Prelievo ( float prelievo )
{
	
capitale = capitale - prelievo ;
contatoreP = contatoreP + 1 ;
totaleDiPrel = totaleDiPrel + prelievo ;

}

void  Assegno ( float assegno )
{
	
capitale = capitale - assegno ;
contatoreA = contatoreA + 1 ;
totaleDiAss = totaleDiAss + assegno ;

}

int main ()
{
	cout <<"inserire capitale attuale"<<endl;
	cin >> capitale ;
	int i = 0 ;
	
	while (i==0)
	{
		char scelta ;
		cout<<"selezionare operazione desiderata : "<<endl ;
		cout<<"v per versamento"<<endl<<"p per prelievo"<<endl<<"a per assegno"<<endl<<"m per menu'"<<endl ;
		cin >> scelta ;
		if (scelta == 'v')
		{
			float N ;
			cout << "inserire valore del versamento"<<endl;
			cin >> N ;
			
			Versamento ( N ) ;
		}
		
		if (scelta == 'p')
		{
				float N ;
				cout << "inserire valore del prelievo"<<endl;
				cin >> N ;
			
				Prelievo ( N ) ;
		}
		
			
		if (scelta == 'a')
		{
					float N ;
					cout << "inserire valore dell'assegno'"<<endl;
					cin >> N ;
			
			Assegno ( N ) ;
		}
		
		if (scelta == 'm')
		{
			
		cout<<"valore versamenti :  "<<totaleDiVers<<endl ;
		cout<<"numero di versamenti : "<<contatoreV<<endl;
		
		cout<<"valore versamenti :  "<<totaleDiPrel<<endl ;
		cout<<"numero di versamenti : "<<contatoreP<<endl;
		
		cout<<"valore assegni :  "<<totaleDiAss<<endl ;
		cout<<"numero di versamenti : "<<contatoreA<<endl;
		
		
		cout << "il capitale attuale ammonta a :"<<capitale<<endl ;
			
		}
		
		
		

		cout << "vuoi procedere con altre operazioni? se SI allora digita 0 , se NO digita 1"	<< endl ;
		cin >> i ;	
		
	}
	
	system ( "pause") ;
}

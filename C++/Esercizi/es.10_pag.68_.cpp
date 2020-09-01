#include <iostream>
using namespace std;
int main (){
	
	int a ;
	int b ;
	int c ;
	
	cout << "inserire primo numero:  " <<endl;
	cin >> a ;
	cout << "inserire secondo numero:  " <<endl;
	cin >> b ;
	cout << "inserire terzo numero:  " <<endl;
	cin >> c ;
	
	bool var1 = a<=b ;
	bool var2 = b<=c ;
	bool var3 = c<=a ;
	
		if (var1==1 && var2==1) {
			
			float risultato = c/a ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
		}
		
		if (var1==0 && var2==0) {
	
			float risultato = a/c ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
		}
		
		
		
		
		
		if (var1==1 && var2==0) {
			
			if (var3==1) {
				
				float risultato = b/c ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
			}	
			else {
					float risultato = b/a ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
			} 
			
			
		}
		
		if (var1==0 && var2==1) {
			
			if (var3==1) {
				
				float risultato = a/b ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
			}	
			else {
					float risultato = c/b ;
			cout << "il rapporto tra il numero mag. e in numero min. e':  " << risultato  << endl;
			} 
			
			
			system ("pause");	
			
		}
		
			 
}

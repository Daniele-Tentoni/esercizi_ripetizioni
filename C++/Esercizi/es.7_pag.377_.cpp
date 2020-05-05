#include <iostream>

using  namespace std;

int main (){
	double catetoOriz;
	double catetoVertic;
	double ipotenusa;
	
	cout << "inserire misura cateto orizzontale\n";
	cin >> catetoOriz;
	cout << "inserire misura cateto verticale\n";
	cin >> catetoVertic;
	cout << "inserire misura ipotenusa\n";
	cin >> ipotenusa;
	
	double area = (catetoOriz*catetoVertic)/2;
	double perimetro = (catetoOriz+catetoVertic+ipotenusa);
	
	cout << "il valore dell'area e' :" << endl ;
	cout << area << endl ;
	cout << "il valore del perimetro e' :"  << endl ;
	cout << perimetro << endl ;
		
}


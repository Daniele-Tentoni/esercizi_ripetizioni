#include <iostream>
using namespace std;
int main (){
	double N;
	double S;
	double W;
	double E;
	double scambio;
	cout << "inserire valore Nord\n";
	cin >> N ;
	cout << "inserire valore Sud\n";
	cin >> S ;
	cout << "inserire valore Ovest\n";
	cin >> W ;
	cout << "inserire valore Est\n";
	cin >> E ;
	scambio=N;
	N=S;
	S=scambio;	
	scambio=W;
	W=E;
	E=scambio;
	
	cout << "mostra valore Nord     ";
	cout << N << endl;
	cout << "mostra valore Sud      ";
	cout << S << endl;
	cout << "mostra valore Ovest    ";
	cout << W << endl;	
	cout << "mostra valore Est      ";
	cout << E << endl;	
	
		
		
	
	
	
}

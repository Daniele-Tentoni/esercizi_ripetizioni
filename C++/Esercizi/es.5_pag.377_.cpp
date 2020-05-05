#include <iostream>

using namespace std;

int main (){
	double angoloGra;
	cout << "inserire valore angolo in gradi\n";
	cin >> angoloGra;
	double angoloRad = angoloGra*3.14/180 ;
	cout << "angolo in radianti vale :\n ";
	cout << angoloRad;
		
	system ("pause");	
}

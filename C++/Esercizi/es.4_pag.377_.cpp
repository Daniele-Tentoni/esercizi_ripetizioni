#include <iostream>

using namespace std;

int main (){ 

	double baseMag;
	double baseMin;
	double altezza;
	cout << "inserire valore baseMag\n";
	cin >> baseMag;
	cout << "inserire valore baseMin\n";
	cin >> baseMin;
	cout << "inserire valore altezza\n";
	cin >> altezza;
	double area = (baseMag*baseMin*altezza)/2;
	cout << "misura area";
	cout << area;
	
}

#include <iostream>

using namespace std;

int main () {
	
	double circonferenza;
	cout << "Inserire valore circonferenza\n";
	cin >> circonferenza;
	double raggio = circonferenza/(2*3.14);
	double area = raggio*raggio*3.14;
	cout << "mostra area\n";
	cout << area;
				
}

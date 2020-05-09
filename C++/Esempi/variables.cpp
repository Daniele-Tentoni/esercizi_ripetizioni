#include <iostream>
#include <limits> // Serve ai numeric_limits.
#include <string>

using namespace std;

int main() {	
	/***
	 * Numeri interi
	 ***/
	int i;				// Numero intero 32 bit.
	cout << "\n**********************************";
	cout << "\n*         Numeri interi          *";
	cout << "\n**********************************";
	cout << "\nInserisci intero\t";
	cin >> i;
	cout << "\nHai inserito l'intero " << i;
	cout << "\nLa dimensione in byte e' " << sizeof(int);
	cout << "\nIl limite inferiore e' " << numeric_limits<int>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<int>::max();
	
	unsigned int ui;	// Numero intero senza segno 32 bit.
	cout << "\nInserisci intero segna segno\t";
	cin >> ui;
	cout << "\nHai inserito l'intero segna segno " << ui;
	cout << "\nLa dimensione in byte e' " << sizeof(unsigned int);
	cout << "\nIl limite inferiore e' " << numeric_limits<unsigned int>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<unsigned int>::max();
	cout << "\nProva ad inserirne uno negativo\t";
	cin >> ui;
	cout << "\nHai inserito l'intero segna segno " << ui;
	
	short int si;		// Numero intero 16 bit.
	cout << "\nInserisci intero corto\t";
	cin >> si;
	cout << "\nHai inserito l'intero corto " << si;
	cout << "\nLa dimensione in byte e' " << sizeof(short int);
	cout << "\nIl limite inferiore e' " << numeric_limits<short int>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<short int>::max();
	cout << "\nProva ad inserirne uno grandissimo\t";
	cin >> si;
	cout << "\nHai inserito l'intero corto " << si;
	
	long int li;		// Numero intero 32 bit.
	cout << "\nInserisci intero lungo\t";
	cin >> li;
	cout << "\nHai inserito l'intero lungo " << li;
	cout << "\nLa dimensione in byte e' " << sizeof(long int);
	cout << "\nIl limite inferiore e' " << numeric_limits<long int>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<long int>::max();
	cout << "\nProva ad inserirne uno grandissimo\t";
	cin >> li;
	cout << "\nHai inserito l'intero lungo " << li;
	
	long long int lli;	// Numero intero 64 bit.
	cout << "\nInserisci intero molto lungo\t";
	cin >> lli;
	cout << "\nHai inserito l'intero molto lungo " << lli;
	cout << "\nLa dimensione in byte e' " << sizeof(long long int);
	cout << "\nIl limite inferiore e' " << numeric_limits<long long int>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<long long int>::max();
	cout << "\nProva ad inserirne uno grandissimo\t";
	cin >> lli;
	cout << "\nHai inserito l'intero molto lungo " << lli;
	
	/***
	 * Numeri in virgola mobile
	 ***/
	float f;
	cout << "\n**********************************";
	cout << "\n*    Numeri in virgola mobile    *";
	cout << "\n**********************************";
	cout << "\nInserisci un numero in virgola fissa\t";
	cin >> lli;
	cout << "\nHai inserito il carattere " << lli;
	cout << "\nLa dimensione in byte e' " << sizeof(float);
	cout << "\nIl limite inferiore e' " << numeric_limits<float>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<float>::max();
	
	double d;
	cout << "\nInserisci un numero in virgola mobile\t";
	cin >> lli;
	cout << "\nHai inserito il carattere " << lli;
	cout << "\nLa dimensione in byte e' " << sizeof(double);
	cout << "\nIl limite inferiore e' " << numeric_limits<double>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<double>::max();
	
	/***
	 * Booleani
	 ***/
	bool b;
	cout << "\n**********************************";
	cout << "\n*           Booleani             *";
	cout << "\n**********************************";
	cout << "\nInserisci un booleano\t";
	cin >> lli;
	cout << "\nHai inserito il carattere " << lli;
	cout << "\nLa dimensione in byte e' " << sizeof(bool);
	cout << "\nIl limite inferiore e' " << numeric_limits<bool>::min();
	cout << "\nIl limite maggiore e' " << numeric_limits<bool>::max();
	cout << "\nTrue corrisponde all'intero " << true;
	cout << "\nFalse corrisponde all'intero " << false;
	
	return 0;
}

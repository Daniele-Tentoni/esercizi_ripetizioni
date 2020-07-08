#include <iostream> 
#include <string.h>
using namespace std ;


void insertValori ( int *a , int lenght )
{	
for ( int i = 0 ; i < lenght ; i++ ) 
{
	cout << "inserire eta' del " << i + 1 <<" ' alunno  : "  << endl ;
	cin >> a [ i ] ;	
}

}

void printArray(string *a, size_t start, size_t end) {
	cout << "[";
	for(size_t i = start; i < end; i++) {
		cout << a[i];
		if(i != end - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

int main () 
{

// Chiedo i nomi degli studenti.
int n;
cout << "Inserire il numero degli studenti da registrare" << endl;
cin >> n;
	string alunni[n];
	for(int i = 0; i < n; i++) {
		cout << "Inserire il nome dello studente " << i + 1 << endl;
		cin >> alunni[i];
	}

	cout << "Adesso provvedo ad ordinarlo" << endl;
	
	printArray(alunni, 0, n);
	// Variabili come sopra.
	int flag = 0, cont = 0;
	// Ordinato usando Bubble Sort 
	for(int i = 0; i < n - 1; i++) 	
	{
		for(int j = 0; j < n - 1 - i + 0; j++, cont++)
			// Scambio due valori non appena mi accorgo che sono disordinati.
			if(alunni[j] > alunni[j + 1])
				swap(alunni[j], alunni[j + 1]);
		// printArray(a, start, end);
		
	}
	printArray(alunni, 0, n);
	
}

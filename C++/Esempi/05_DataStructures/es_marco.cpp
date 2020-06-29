#include <iostream>
#include <cmath>

using namespace std;

void printArray(int *a, size_t n) {
	// Devo chiarare di spostarmi lungo l'array di un numero di byte congruo.
	for(size_t i = 0; i < n; i++) {
		cout << "Index: " << i << " ";
		cout << "Value: " << a[i] << endl;
	}
}

int array_sum(int num_cons, int num[]) {
	printArray(num, 10);
	if(num_cons < 0)
		return 0;

	if(num_cons == 1) {
		cout << "Arrivato alla fine" << endl;
		return num[num_cons] * num[num_cons];
	}

	cout << "Arrivato al passo " << num_cons;
	if((num_cons % 2) == 1)
	{
		return num[num_cons] * num[num_cons] + array_sum(num_cons - 2, num);
	} else {
		array_sum(num_cons - 1, num);
	}
}

int main ()
{
	
	int numeriDaConsiderare;
	float sommaDispari = 0;
	
	cout << " Digitare numeri di N che si vogliono considerare : "<<endl ;
	cin >> numeriDaConsiderare ;
	int numeriDigitati [10] ;
	
	for (int i = 0 ; i < numeriDaConsiderare ; i ++)
	{
		
		cout << "Inserire numero del "<< ( i+1 ) << "' slot "<<endl ;
		cin >> numeriDigitati [i];
	}

	printArray(numeriDigitati, 10);

	sommaDispari = array_sum(numeriDaConsiderare, numeriDigitati);

	cout << "cifra totale dispari = "<< sqrt(sommaDispari) <<endl ;
}
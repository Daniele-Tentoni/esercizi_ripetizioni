#include <iostream>
#include <string>

using namespace std;

struct identita 
{
	string nome;
	string cognome;
	string CF;
	string comune;	
};

void printIdentita(identita a) {
	cout << "{" << a.nome << ", " << a.cognome << ", " << a.CF 
		<< ", " << a.comune << "}" << endl;
}

void printArray(identita a[], size_t start, size_t end) {
	cout << "[" << endl;
	for(size_t i = start; i < end; i++) {
		printIdentita(a[i]);
		if(i != end - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

void compareComune(identita a[], int lenght)
{
	int contatore = 0;
	for (int j = 0; j < lenght; j++)
	{
		if (a[j].comune == "cesena")
		{
			cout << "Trovato cittadino: " << endl;
			printIdentita(a[j]);
			contatore++;
		}
	}

	if (contatore == 0)
		cout << "Nessun concittadino trovato, mi dispiace " << endl;	
}

void compareCodiceFiscale(identita a[], int lenght, string nomeCercato, 
						string cognomeCercato)
{
	int contatore = 0;
	for (int j = 0; j < lenght; j++)
	{
		if (a[j].nome == nomeCercato && a[j].cognome == cognomeCercato)
		{
			cout << "Trovato cittadino: " << endl;
			printIdentita(a[j]);
			contatore++;
		}
	}

	if (contatore == 0)
		cout << "Nessun cittadino trovato, mi dispiace " << endl;	
}

void sortPersons(identita a[], int length) {
	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length - i - 1; j++) {
			if(a[j].cognome > a[j + 1].cognome) {
				printIdentita(a[j]);
				printIdentita(a[j + 1]);
				identita tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main ()
{
	cout << " Di quante persone vuoi inserire i dati ? - ";
	int N;
	cin >> N;
	
	identita persone [N];
	for (int i = 0 ; i < N ; i++)
	{
		cout << "Inserire nome : ";
		cin >> persone[i].nome;
		cout << "Inserire cognome : ";
		cin >> persone[i].cognome;		
		cout << "Inserire codice fiscale : ";
		cin >> persone[i].CF;		
		cout << "Inserire Comune di nascita : ";
		cin >> persone[i].comune ;
	}

	compareComune(persone, N);
	printArray(persone, 0, N);
	
	string nomeCercato;
	cout << " Inserire NOME della persona di cui si vuole avere il CF : ";
	cin >> nomeCercato;
	string cognomeCercato;
	cout << " Inserire COGNOME della persona di cui si vuole avere il CF : ";
	cin >> cognomeCercato;
	
	compareCodiceFiscale(persone , N , nomeCercato , cognomeCercato);
	
	// e qui dovrei fare la parte dove mi chiede di sistemarli 
	// in ordine alfabetico 
	sortPersons(persone, N);
	printArray(persone, 0, N);
}

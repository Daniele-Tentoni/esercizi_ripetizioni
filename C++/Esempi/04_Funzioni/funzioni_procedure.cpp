#include <iostream>

/*
 * La funzione rappresenta il costrutto fondamentale
 * dell'incapsulamento della programmazione moderna.
 * <tipo> <nome_funzione> (<tipo> <nome_arg1>);
 */

using namespace std;

// Posso dichiarare separatamente il prototipo della funzione.
int sum(int n, int m);

/*
 * Dichiaro una variabile globale per renderla visibile a tutto il file.
 * Altrimenti non sarebbe stata visibile a più funzioni.
 * Bisogna stare attenti a non abusarne.
 */
int num;

/*
 * Procedure:
 * Dati degli input, non producono output.
 * Dovrebbero quindi avere dei side-effects.
 */
void inc(int n) {
	 num += n;
	 // L'istruzione return semplicemente fa uscire dalla funzione.
	 return;
}

/*
 * La funzione main è una funzione come le altre.
 * La sua particolarità è che viene sempre eseguita all'avvio del programma.
 */
int main() {
	cout << "Questo programma mostra la differenza tra funzione e procedura." << endl;
	cout << "Inserire il primo numero" << endl;
	/*
	 * Queste variabili sono visibili solamente dentro al blocco di codice
	 * dentro al quale sono state dichiarate.
	 */
	int n, m;
	cin >> n;
	cout << "Inserire il secondo numero" << endl;
	cin >> m;
	
	/*
	 * Dichiarare in questo punto un'altra variabile num produrrebbe un risultato
	 * inaspettato: nasconderebbe la variabile globale num. 
	 * In generale non possiamo dichiarare due variabili con lo stesso nome 
	 * visibili nello stesso scope.
	 */
    // int num = 0;
    
	// Uso la funzione che restituisce un risultato.
	num = sum(n, m);
	cout << "Abbiamo prodotto la somma " << num << endl;
	
	cout << "Inserire l'incremento" << endl;
	cin >> n;
	
	// Uso la procedura per manipolare una variabile.
	inc(n);
	cout << "Abbiamo prodotto l'incremento " << num << endl;
	system("pause");
	
	// Finalmente stiamo intravedendo cosa sia veramente questo return.
	return 0;
}

/*
 * Funzioni:
 * Dato un input, producono un output.
 * Non dovrebbero avere side-effects.
 */
int sum(int n, int m) {
	// L'istruzione return implica anche il ritorno di un output.
	return n + m;
}

// Author: Daniele Tentoni
// Organization: Me stesso

/*
 * Prende in input un messaggio e lo mostra a video.
 */

#include <iostream>  // Libreria I/O

using namespace std;

// Funzione principale del programma
int main()
{
	cout << "Inizio programma \n";
	
	/*
	 * Dichiaro una variabile di nome msg di tipo stringa.
	 * Non possiamo assegnare un valore ad una variabile
	 * senza prima averla dichiarata.
	 */
	string msg = "msg standard";
	
	// Mostra all'utente una scritta sulla console.
	cout << "Inserire messaggio da mettere dentro a msg: ";
	
	// Legge una scritta dalla console.
	cin >> msg;
	
	// Mostra all'utente una scritta sulla console.
	cout << "Hai scritto " << msg;
	
	// Comunichiamo che il programma è andato a buon fine.
	return 0;
}

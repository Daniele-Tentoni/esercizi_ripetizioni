#include <iostream>

using namespace std;

int main() {
	cout << "Lezione sui cicli: parte 2" << endl;
	
	char c;
	/*
	 * Questo ciclo non chiede una condizione prima di entrare, ma
	 * solamente al termine di una esecuzione controlla se deve continuare
	 * ad eseguire lo stesso blocco di istruzioni oppure proseguire.
	 
	 * Come nell'esempio viene usato specialmente per effettuare un
	 * controllo su un qualcosa che, nel caso in cui sia sbagliato,
	 * occorra ripetere, come l'input di un utente.
	 
	 * Viene anche definito come "Postcondizionale".
	 */
	do {
		cout << "Inserire una lettera. Se l'input non sara' corretto, dovrai ripetere." << endl;
		cin >> c;
	} while (c < 65 || c > 90 && c < 97 || c > 122);
	
	cout << "Se sei arrivato fin qui vuol dire che l'input e' corretto.";
	
	system("pause");
	return 0;
}

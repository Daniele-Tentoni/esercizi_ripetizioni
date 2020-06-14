#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;
    /*
     * Posso specificare anche delle variabili nelle condizioni.
     */
     if(n > 0) {
          cout << "E' positivo.";
     }
     
     if(n == 0) {
          cout << "E' 0.";
     }
     
     if(n < 0) {
          cout << "E' negativo.";
     }
    
    system("pause");
    return 0;
}

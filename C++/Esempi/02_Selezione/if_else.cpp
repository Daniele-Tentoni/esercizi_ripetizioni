#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero: ";
    cin >> n;
    
    /*
     * Posso specificare un ramo da prendere quando la condizione è verificata
     * e uno per quando non è verificata.
     */
    if(n > 0) {
         cout << "E' positivo.";
    } else {
           cout << "Non è positivo.";
    }
    
    system("pause");
    return 0;
}

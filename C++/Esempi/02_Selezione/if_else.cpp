#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero: ";
    cin >> n;
    
    /*
     * Posso specificare un ramo da prendere quando la condizione � verificata
     * e uno per quando non � verificata.
     */
    if(n > 0) {
         cout << "E' positivo.";
    } else {
           cout << "Non � positivo.";
    }
    
    system("pause");
    return 0;
}

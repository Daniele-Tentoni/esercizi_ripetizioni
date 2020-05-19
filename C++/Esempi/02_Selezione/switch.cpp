#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero: ";
    cin >> n;
    
    /*
     * Posso specificare più leggibilmente vari rami.
     * Basta che siano però semplici ugualianze.
     */
    switch(n) {
              case 0:
                   cout << "E' uguale a 0.";
                   break;
              case 1:
                   cout << "E' uguale a 1.";
                   break;
              case 9:
                   // Notare che non ho messo il break;
                   cout << "E' uguale a 9";
              case 10:
                   cout << "E' uguale a 9 o a 10.";
                   break;
              default:
                      cout << "Non rientra nei casi gestiti.";
    }
    
    system("pause");
    return 0;
}

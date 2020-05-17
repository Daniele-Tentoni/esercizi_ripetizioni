#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero: ";
    cin >> n;
    
    /*
     * Posso specificare quanti rami con condizione io voglia.
     */
    if(n < 0) {
         cout << "E' minore di 0.";
    } else if(n >= 0 && n < 10) {
           cout << "E' compreso tra 0 e 10.";
    } else if(n >= 10 && n < 20) {
           cout << "E' compreso tra 10 e 20.";
    } else {
           cout << "E' maggiore di 20.";
    }
    
    system("pause");
    return 0;
}

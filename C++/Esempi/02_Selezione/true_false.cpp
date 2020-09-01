#include <iostream>

using namespace std;

int main() {
    /*
     * Se la condizione è vera, allora entro.
     * Se la condizione è falsa, allora non entro.
     */
    
    cout << "Test della condizione: ";
    if(true) {
             cout << "Vero" << endl;
    }
    if(false) {
              cout << "Falso" << endl;
    }
    
    cout << "Test della condizione numerica: ";
    if(0) {
          cout << "0" << endl;
    }
    if(1) {
          cout << "1" << endl;
    }
    
    system("pause");
    return 0;
}

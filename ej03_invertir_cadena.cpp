// Solicita una cadena y muestra su versión invertida (sin usar funciones predefinidas como std::reverse).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    
    cout << "Cadena invertida: ";
    
    for (int i = cadena.length() - 1; i >= 0; i--) {
        cout << cadena[i];
    }
    cout << endl;
    return 0;
}
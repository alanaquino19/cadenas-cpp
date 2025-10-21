// Dada una cadena, genera una nueva sin espacios en blanco.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, sinEspacios;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    for (char c : texto) {
        if (!isspace(c)) {
            sinEspacios += c;
        }
    }

    cout << "Cadena sin espacios: " << sinEspacios << endl;
    return 0;
}
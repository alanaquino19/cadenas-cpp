// Dada una cadena, elimina los caracteres duplicados dejando solo la primera aparición de cada uno.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, resultado;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    for (char c : texto) {
        if (resultado.find(c) == string::npos) {
            resultado += c;
        }
    }

    cout << "Cadena sin caracteres repetidos: " << resultado << endl;
    return 0;
}
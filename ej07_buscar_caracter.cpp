// Pide una cadena y un caracter, e indica cuántas veces aparece ese caracter en la cadena.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char caracter;
    int contador = 0;

    cout << "Ingresa una cadena: ";
    getline(cin, texto);
    cout << "Ingresa un caracter a buscar: ";
    cin >> caracter;

    for (char c : texto) {
        if (c == caracter) {
            contador++;
        }
    }

    cout << "El caracter '" << caracter << "' aparece " << contador << " veces." << endl;
    return 0;
}
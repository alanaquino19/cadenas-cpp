// Dada una cadena, reemplaza todas las apariciones de un caracter por otro.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char original, reemplazo;

    cout << "Ingresa una cadena: ";
    getline(cin, texto);
    cout << "Ingresa el caracter a reemplazar: ";
    cin >> original;
    cout << "Ingresa el nuevo carácter: ";
    cin >> reemplazo;

    for (char &c : texto) {
        if (c == original) {
            c = reemplazo;
        }
    }

    cout << "Cadena modificada: " << texto << endl;
    return 0;
}
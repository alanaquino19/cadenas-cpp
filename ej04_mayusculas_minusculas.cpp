// Convierte todas las letras de una cadena a mayúsculas y luego a minúsculas.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    string mayusculas = texto;
    for (char &c : mayusculas) {
        c = toupper(c);
    }

    string minusculas = texto;
    for (char &c : minusculas) {
        c = tolower(c);
    }

    cout << "En mayúsculas: " << mayusculas << endl;
    cout << "En minúsculas: " << minusculas << endl;
    return 0;
}
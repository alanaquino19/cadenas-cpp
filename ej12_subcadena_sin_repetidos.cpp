// Encuentra la longitud de la subcadena más larga que no contiene caracteres repetidos.

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string texto;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    int maxLongitud = 0;
    int inicio = 0;
    unordered_set<char> caracteres;

    for (int fin = 0; fin < texto.size(); fin++) {
        while (caracteres.find(texto[fin]) != caracteres.end()) {
            caracteres.erase(texto[inicio]);
            inicio++;
        }
        caracteres.insert(texto[fin]);
        if (caracteres.size() > maxLongitud)
            maxLongitud = caracteres.size();
    }

    cout << "Longitud de la subcadena más larga sin caracteres repetidos: " << maxLongitud << endl;
    return 0;
}
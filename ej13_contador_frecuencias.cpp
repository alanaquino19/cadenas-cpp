// Muestra cuántas veces aparece cada caracter en una cadena (usa un map o unordered_map).

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string texto;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    unordered_map<char, int> frecuencias;

    for (char c : texto) {
        frecuencias[c]++;
    }

    cout << "Frecuencia de caracteres:" << endl;
    for (auto &par : frecuencias) {
        cout << "'" << par.first << "': " << par.second << endl;
    }

    return 0;
}
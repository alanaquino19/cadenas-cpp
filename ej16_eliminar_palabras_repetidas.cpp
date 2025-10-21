// Dada una frase, elimina las palabras duplicadas manteniendo el orden original.

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    stringstream ss(frase);
    string palabra;
    unordered_set<string> vistas;
    vector<string> resultado;

    while (ss >> palabra) {
        if (vistas.find(palabra) == vistas.end()) {
            vistas.insert(palabra);
            resultado.push_back(palabra);
        }
    }
    
    cout << "Frase con las palabras duplicadas eliminadas: ";

    for (size_t i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if (i != resultado.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
// Dada una frase con varias palabras, invierte el orden de las palabras (sin invertir las letras).

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    stringstream ss(frase);
    vector<string> palabras;
    string palabra;

    while (ss >> palabra) {
        palabras.push_back(palabra);
    }
    
    cout << "Frase invertida: ";

    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i != 0) cout << " ";
    }
    cout << endl;

    return 0;
}
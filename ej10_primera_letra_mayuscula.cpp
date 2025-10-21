// Dada una frase, convierte la primera letra de cada palabra a mayúscula.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    bool nuevaPalabra = true;
    for (char &c : frase) {
        if (isspace(c)) {
            nuevaPalabra = true;
        } else if (nuevaPalabra) {
            c = toupper(c);
            nuevaPalabra = false;
        } else {
            c = tolower(c);
        }
    }

    cout << "Frase modificada: " << frase << endl;
    return 0;
}
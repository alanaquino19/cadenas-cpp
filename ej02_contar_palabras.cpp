// Pide una frase y determina cuántas palabras tiene (separadas por espacios).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    int contador = 0;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    bool enPalabra = false;
    for (char c : frase) {
        if (isspace(c)) {
            if (enPalabra) {
                contador++;
                enPalabra = false;
            }
        } else {
            enPalabra = true;
        }
    }
    if (enPalabra) contador++;

    cout << "La frase contiene " << contador << " palabras." << endl;
    return 0;
}
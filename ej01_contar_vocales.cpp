// Escribe un programa que lea una cadena y cuente cuántas vocales contiene.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contador = 0;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    cout << "La cadena contiene " << contador << " vocales." << endl;
    return 0;
}
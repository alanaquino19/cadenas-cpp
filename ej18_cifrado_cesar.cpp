// Implementa un programa que cifre y descifre texto usando un desplazamiento fijo (por ejemplo, +3 letras).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int desplazamiento;
    cout << "Ingresa el texto: ";
    getline(cin, texto);
    cout << "Ingresa el desplazamiento: ";
    cin >> desplazamiento;

    string cifrado = "";
    for (char c : texto) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + desplazamiento) % 26 + base;
        }
        cifrado += c;
    }

    cout << "Texto cifrado: " << cifrado << endl;

    string descifrado = "";
    for (char c : cifrado) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base - desplazamiento + 26) % 26 + base;
        }
        descifrado += c;
    }

    cout << "Texto descifrado: " << descifrado << endl;
    return 0;
}
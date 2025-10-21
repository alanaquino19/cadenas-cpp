// Verifica si una palabra ingresada es palíndroma (se lee igual al derecho y al revés).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    getline(cin, palabra);

    bool esPalindromo = true;
    int n = palabra.length();
    for (int i = 0; i < n / 2; i++) {
        if (tolower(palabra[i]) != tolower(palabra[n - 1 - i])) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo)
        cout << "La palabra es palíndroma." << endl;
    else
        cout << "La palabra no es palíndroma." << endl;

    return 0;
}
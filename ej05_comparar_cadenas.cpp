// Escribe un programa que compare dos cadenas y determine si son iguales sin usar == directamente.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena1, cadena2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, cadena2);

    bool iguales = (cadena1.length() == cadena2.length());
    if (iguales) {
        for (size_t i = 0; i < cadena1.length(); i++) {
            if (cadena1[i] != cadena2[i]) {
                iguales = false;
                break;
            }
        }
    }

    if (iguales)
        cout << "Las cadenas son iguales." << endl;
    else
        cout << "Las cadenas son diferentes." << endl;

    return 0;
}
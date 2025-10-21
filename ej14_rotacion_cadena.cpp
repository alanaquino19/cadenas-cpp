// Determina si una cadena es rotación de otra (por ejemplo, “abcd” y “cdab”).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena1, cadena2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, cadena2);

    if (cadena1.length() != cadena2.length()) {
        cout << "No son rotaciones." << endl;
        return 0;
    }

    string doble = cadena1 + cadena1;
    if (doble.find(cadena2) != string::npos)
        cout << "La segunda cadena es una rotación de la primera." << endl;
    else
        cout << "No son rotaciones." << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool sonAnagramas(string palabra1, string palabra2) {
    // Si las palabras son iguales, no son anagramas
    if (palabra1 == palabra2) {
        return false;
    }

    // Verificar si tienen la misma longitud
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // Ordenar ambas palabras
    sort(palabra1.begin(), palabra1.end());
    sort(palabra2.begin(), palabra2.end());

    // Comparar si son iguales después de ordenar
    return palabra1 == palabra2;
}

int main() {
    string palabra1, palabra2;

    // Entrada de datos
    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    // Verificar si son anagramas y mostrar resultado
    if (sonAnagramas(palabra1, palabra2)) {
        cout << "Las palabras \"" << palabra1 << "\" y \"" << palabra2 << "\" son anagramas." << endl;
    }
    else {
        cout << "Las palabras \"" << palabra1 << "\" y \"" << palabra2 << "\" no son anagramas." << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Función para eliminar tildes y convertir a minúsculas
char normalizarCaracter(char c) {
    // Convertir a minúsculas
    c = tolower(c);
    // Reemplazar tildes
    if (c == 'á') return 'a';
    if (c == 'é') return 'e';
    if (c == 'í') return 'i';
    if (c == 'ó') return 'o';
    if (c == 'ú') return 'u';
    return c;
}

// Función para verificar si es palíndromo
bool esPalindromo(string texto) {
    // Crear una cadena limpia (sin espacios ni signos de puntuación)
    string limpio = "";
    for (char c : texto) {
        if (isalnum(c)) { // Solo letras y numeros
            limpio += normalizarCaracter(c);
        }
    }

    // Comparar la cadena con su inversa
    int izquierda = 0;
    int derecha = limpio.length() - 1;

    while (izquierda < derecha) {
        if (limpio[izquierda] != limpio[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}

int main() {
    string texto;

    // Entrada del texto
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    // Verificar si es palíndromo y mostrar resultado
    if (esPalindromo(texto)) {
        cout << "\"" << texto << "\" es un palidromo." << endl;
    }
    else {
        cout << "\"" << texto << "\" no es un palidromo." << endl;
    }

    return 0;
}
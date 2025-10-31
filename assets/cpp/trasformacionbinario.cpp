#include <iostream>
using namespace std;

int main() {
    int decimal, resto;
    string binario = "";

    // Entrada del número decimal
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    // Manejo de caso especial: 0
    if (decimal == 0) {
        binario = "0";
    }
    else {
        // Convertir a binario usando división sucesiva
        int num = decimal;
        if (num < 0) num = -num; // Manejar números negativos
        while (num > 0) {
            resto = num % 2;
            binario = (resto == 0 ? "0" : "1") + binario;
            num = num / 2;
        }
        // Agregar signo negativo si corresponde
        if (decimal < 0) {
            binario = "-" + binario;
        }
    }

    // Mostrar resultado
    cout << "El numero " << decimal << " en binario es: " << binario << endl;

    return 0;
}
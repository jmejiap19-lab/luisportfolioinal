#include <iostream>
using namespace std;

int main() {
    int totalDias, anios, meses, semanas, dias;

    // Entrada
    cout << "Ingrese el mumero de dias: ";
    cin >> totalDias;

    // Inicializar variables
    anios = 0;
    meses = 0;
    semanas = 0;
    dias = totalDias;

    // Calcular usando bucle while
    while (dias >= 365) {
        anios++;
        dias -= 365;
    }
    while (dias >= 30) {
        meses++;
        dias -= 30;
    }
    while (dias >= 7) {
        semanas++;
        dias -= 7;
    }

    // Mostrar resultados
    cout << totalDias << " dias equivalen a:" << endl;
    cout << anios << " a/os, " << meses << " meses, " << semanas << " semanas y " << dias << " dias." << endl;

    return 0;
}
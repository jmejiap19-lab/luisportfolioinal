#include <iostream>
using namespace std;

int main() {
    int totalDias, anios, meses, semanas, dias;

    // Entrada
    cout << "Ingrese el nuemro de dias: ";
    cin >> totalDias;

    // Inicializar variables
    anios = 0;
    meses = 0;
    semanas = 0;
    dias = totalDias;

    // Calcular usando bucle do-while
    do {
        if (dias >= 365) {
            anios++;
            dias -= 365;
        }
        else if (dias >= 30) {
            meses++;
            dias -= 30;
        }
        else if (dias >= 7) {
            semanas++;
            dias -= 7;
        }
        else {
            break;
        }
    } while (dias >= 7);

    // Mostrar resultados
    cout << totalDias << " días equivalen a:" << endl;
    cout << anios << " a/os, " << meses << " meses, " << semanas << " semanas y " << dias << " dias." << endl;

    return 0;
}
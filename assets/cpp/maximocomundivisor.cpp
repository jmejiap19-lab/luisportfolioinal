#include <iostream>
using namespace std;

// Función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    // Tomar valores absolutos para manejar números negativos
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Algoritmo de Euclides
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Función para calcular el mcm usando la relación con el MCD
int calcularMCM(int a, int b) {
    // Evitar división por cero y manejar números negativos
    if (a == 0 || b == 0) return 0;

    // Calcular mcm usando la fórmula: |a * b| / MCD(a, b)
    return (abs(a) / calcularMCD(a, b)) * abs(b);
}

int main() {
    int num1, num2;

    // Entrada de datos
    cout << "Ingrese el primer nuemro entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    // Calcular y mostrar MCD
    int mcd = calcularMCD(num1, num2);
    cout << "El Maximo Comun Divisor de " << num1 << " y " << num2 << " es: " << mcd << endl;

    // Calcular y mostrar mcm
    int mcm = calcularMCM(num1, num2);
    cout << "El Minimo Comun Multiplo de " << num1 << " y " << num2 << " es: " << mcm << endl;

    return 0;
}
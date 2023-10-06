#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char continuar;

    do {
        int opcion;
        double temperatura;

        // Menú de opciones
        cout << "Selecciona la escala de temperatura a convertir:" << endl;
        cout << "1. Celsius a Kelvin" << endl;
        cout << "2. Celsius a Fahrenheit" << endl;
        cout << "3. Kelvin a Celsius" << endl;
        cout << "4. Kelvin a Fahrenheit" << endl;
        cout << "5. Fahrenheit a Celsius" << endl;
        cout << "6. Fahrenheit a Kelvin" << endl;
        cout << "Opción: ";
        cin >> opcion;

        cout << "Ingresa la temperatura: ";
        cin >> temperatura;

        double resultado;

        if (opcion == 1) {
            resultado = temperatura + 273.15; // Celsius a Kelvin
            cout << "Resultado: " << resultado << " Kelvin" << endl;
        } else if (opcion == 2) {
            resultado = (temperatura * 9 / 5) + 32; // Celsius a Fahrenheit
            cout << "Resultado: " << resultado << " Fahrenheit" << endl;
        } else if (opcion == 3) {
            resultado = temperatura - 273.15; // Kelvin a Celsius
            cout << "Resultado: " << resultado << " Celsius" << endl;
        } else if (opcion == 4) {
            resultado = (temperatura - 273.15) * 9 / 5 + 32; // Kelvin a Fahrenheit
            cout << "Resultado: " << resultado << " Fahrenheit" << endl;
        } else if (opcion == 5) {
            resultado = (temperatura - 32) * 5 / 9; // Fahrenheit a Celsius
            cout << "Resultado: " << resultado << " Celsius" << endl;
        } else if (opcion == 6) {
            resultado = (temperatura - 32) * 5 / 9 + 273.15; // Fahrenheit a Kelvin
            cout << "Resultado: " << resultado << " Kelvin" << endl;
        } else {
            cout << "Opción no válida." << endl;
        }

        cout << "¿Deseas realizar otra conversión? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "Gracias por usar el conversor de temperaturas. ¡Hasta luego!" << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long numero; // Usamos long long para manejar números grandes
    cout << "Ingresa un número positivo y entero: ";
    cin >> numero;

    while (numero < 0 || cin.fail()) {
        cout << "Por favor, ingresa un número válido: ";
        cin >> numero;
    }

    vector<int> digitos;

    // Extraer dígitos y almacenarlos en el vector
    while (numero > 0) {
        int digito = numero % 10;
        digitos.push_back(digito);
        numero /= 10;
    }

    // Calcular la suma de los dígitos
    int suma = 0;
    for (int digito : digitos) {
        suma += digito;
    }

    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}
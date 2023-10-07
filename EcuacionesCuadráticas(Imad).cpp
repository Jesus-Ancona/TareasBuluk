#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingresa los valores de a, b y c (en ese orden): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Esta no es una ecuación cuadrática." << endl;
        return 1; // Terminar el programa con código de error
    }

    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        cout << "No hay raíces reales." << endl;
    } else {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "Las dos raíces son: " << raiz1 << " y " << raiz2 << endl;
    }

    return 0;
}
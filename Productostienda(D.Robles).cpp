#include <iostream>
#include <vector>
using namespace std;

int main() {
    const double IVA = 0.16; // Tasa de IVA (16%)

    int cantidadProductos;
    double precioProducto, subtotal = 0.0, total;

    cout << "¿Cuántos productos compraste?: ";
    cin >> cantidadProductos;

    if (cantidadProductos <= 0) {
        cout << "Ingresa una cantidad válida de productos comprados." << endl;
        return 1; // Salir del programa con código de error
    }

    vector<double> precios;

    for (int i = 0; i < cantidadProductos; ++i) {
        cout << "Ingresa el precio del producto " << (i + 1) << ": ";
        cin >> precioProducto;

        if (precioProducto <= 0) {
            cout << "Por favor, ingresa un precio válido para el producto " << (i + 1) << "." << endl;
            return 1; // Salir del programa con código de error
        }

        precios.push_back(precioProducto);
        subtotal += precioProducto;
    }

    total = subtotal + (subtotal * IVA);

    if (cantidadProductos > 5) {
        // Aplicar un descuento del 10% si compró más de 5 productos
        total = total - (total * 0.10);
    }

    cout << "El total a pagar es: $" << total << endl;

    return 0; // Salir del programa con éxito
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Definir los vectores de opciones para ingredientes, cremas y salsas
    vector<string> menuSalado = {"Pepperoni", "Jamón", "Queso", "Pastor"};
    vector<string> menuDulce = {"Fresa", "Durazno", "Philadelphia", "Plátano"};
    vector<string> cremas = {"Nutella", "Cajeta", "Lechera"};
    vector<string> salsas = {"Salsa de Pizza", "Crema de champiñones", "Salsa Inglesa", "Ninguna"}; // Agregamos "Ninguna" como opción
    
    // Definir los precios de ingredientes, cremas y salsas
    vector<int> preciosIngredientes = {15, 15, 15, 15};
    vector<int> preciosCremas = {10, 10, 10};
    vector<int> preciosSalsas = {5, 5, 5, 0}; // Agregamos 0 para "Ninguna" salsa
    
    // Solicitar al usuario que elija entre crepa salada o dulce
    int opcionMenu;
    cout << "Bienvenido a Crepas AJ, por favor selecciona una opción para comenzar a armar tu crepa" << endl;
    cout << "Menú:" << endl;
    cout << "1. Crepa Salada" << endl;
    cout << "2. Crepa Dulce" << endl;
    cin >> opcionMenu;

    // Verificar que la opción de menú sea válida
    if (opcionMenu != 1 && opcionMenu != 2) {
        cout << "Opción de menú no válida. Debes elegir 1 para crepa salada o 2 para crepa dulce." << endl;
        return 1; // Terminar el programa con un código de error
    }

    // Seleccionar el menú correspondiente basado en la elección del usuario
    vector<string> menuSeleccionado = (opcionMenu == 1) ? menuSalado : menuDulce;
    
    // Solicitar al usuario que elija ingredientes, crema y salsa
    int opcionIngrediente, opcionCrema, opcionSalsa;
    cout << "Elige tu ingrediente (1-" << menuSeleccionado.size() << "):" << endl;
    for (int i = 0; i < menuSeleccionado.size(); i++) {
        cout << i + 1 << ". " << menuSeleccionado[i] << endl;
    }
    cin >> opcionIngrediente;

    cout << "Elige tu crema (1-" << cremas.size() << "):" << endl;
    for (int i = 0; i < cremas.size(); i++) {
        cout << i + 1 << ". " << cremas[i] << endl;
    }
    cin >> opcionCrema;

    cout << "Elige tu salsa (1-" << salsas.size() << "):" << endl;
    for (int i = 0; i < salsas.size(); i++) {
        cout << i + 1 << ". " << salsas[i] << endl;
    }
    cin >> opcionSalsa;

    // Verificar que las opciones ingresadas sean válidas
    if (opcionIngrediente < 1 || opcionIngrediente > menuSeleccionado.size() ||
        opcionCrema < 1 || opcionCrema > cremas.size() ||
        opcionSalsa < 1 || opcionSalsa > salsas.size()) {
        cout << "Opción no válida. Por favor, elige opciones válidas." << endl;
        return 1; // Terminar el programa con un código de error
    }

    // Calcular el costo total de la crepa
    int precioBase = 40;
    int costoTotal = precioBase + preciosIngredientes[opcionIngrediente - 1] + preciosCremas[opcionCrema - 1] + preciosSalsas[opcionSalsa - 1];

    // Mostrar la elección del usuario y el costo total
    cout << "Has elegido una crepa " << ((opcionMenu == 1) ? "salada" : "dulce") << " con:" << endl;
    cout << "- Ingrediente: " << menuSeleccionado[opcionIngrediente - 1] << endl;
    cout << "- Crema: " << cremas[opcionCrema - 1] << endl;
    cout << "- Salsa: " << salsas[opcionSalsa - 1] << endl;
    cout << "Costo total: " << costoTotal << " pesos" << endl;

    return 0; // Terminar el programa con éxito
}
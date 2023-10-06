#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0 && i % 10 == 0) {
            cout << "Cafe con leche y hielos";
        } else if (i % 3 == 0 && i % 5 == 0) {
            cout << "Cafe con leche";
        } else if (i % 5 == 0 && i % 10 == 0) {
            cout << "Leche con hielos";
        } else if (i % 3 == 0 && i % 10 == 0) {
            cout << "Cafe con hielos";
        } else if (i % 3 == 0) {
            cout << "Cafe";
        } else if (i % 5 == 0) {
            cout << "Leche";
        } else if (i % 10 == 0) {
            cout << "Hielos";
        } else {
            cout << i;
        }

        if (i < 100) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
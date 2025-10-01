#include <iostream>
#include <vector>
using namespace std;

// Si DyV.h no existe, agregamos la función plantilla aquí:
template <typename T>
int BusquedaBinaria(T x, const vector<T>& a, int inicio, int fin) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (a[medio] == x)
            return medio;
        else if (a[medio] < x)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1;
}

template <typename T>
int BusquedaBinariaINV(T x, const vector<T>& a, int inicio, int fin) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (a[medio] == x)
            return medio;
        else if (a[medio] > x)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;
    vector<float> b = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    float y = 3.3f;
    vector<char> c = {'a', 'b', 'c', 'd', 'e'};
    char z = 'd';
    int resultado1 = BusquedaBinaria(x, a, 0, a.size() - 1);
    if (resultado1 != -1) {
        cout << "El valor " << x << " se encuentra en la posicion: " << resultado1 << endl;
    }
    int resultado2 = BusquedaBinaria(y, b, 0, b.size() - 1);
    if (resultado2 != -1) {
        cout << "El valor " << y << " se encuentra en la posicion: " << resultado2 << endl;
    }
    int resultado3 = BusquedaBinaria(z, c, 0, c.size() - 1);
    if (resultado3 != -1) {
        cout << "El valor " << z << " se encuentra en la posicion: " << resultado3 << endl;
    }
    int resultado4 = BusquedaBinariaINV(5, {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, 0, 9);
    if (resultado4 != -1) {
        cout << "El valor 5 se encuentra en la posicion: " << resultado4 << endl;
    }
    int resultado5 = BusquedaBinariaINV(3.3f, {5.5f, 4.4f, 3.3f, 2.2f, 1.1f}, 0, 4);
    if (resultado5 != -1) {
        cout << "El valor 3.3 se encuentra en la posicion: " << resultado5 << endl;
    }
    int resultado6 = BusquedaBinariaINV('d', {'e', 'd', 'c', 'b', 'a'}, 0, 4);
    if (resultado6 != -1) {
        cout << "El valor 'd' se encuentra en la posicion: " << resultado6 << endl;
    }
    return 0;
}

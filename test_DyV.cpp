#include <iostream>
#include <vector>
using namespace std;

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
    return 0;
}

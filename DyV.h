#include <vector>
#include <vector>
#include <iostream>
using namespace std;

int BusquedaBinaria (int x, vector<int> a, int ini, int fin) {
    if (ini > fin) { printf("No se ha encontrado el valor\n"); return -1; }
    int medio = (ini + fin) / 2;
    if (a[medio] == x) return medio;
    else if (a[medio] > x) return BusquedaBinaria(x, a, ini, medio - 1);
    else return BusquedaBinaria(x, a, medio + 1, fin);

}

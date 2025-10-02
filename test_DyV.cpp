#include <iostream>
#include <vector>
#include "DyV.h"
using namespace std;

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

    vector<int> a_inv = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int resultado4 = BusquedaBinariaINV(5, a_inv, 0, a_inv.size() - 1);
    if (resultado4 != -1) {
        cout << "El valor 5 se encuentra en la posicion: " << resultado4 << endl;
    }

    vector<float> b_inv = {5.5f, 4.4f, 3.3f, 2.2f, 1.1f};
    int resultado5 = BusquedaBinariaINV(3.3f, b_inv, 0, b_inv.size() - 1);
    if (resultado5 != -1) {
        cout << "El valor 3.3 se encuentra en la posicion: " << resultado5 << endl;
    }

    vector<char> c_inv = {'e', 'd', 'c', 'b', 'a'};
    int resultado6 = BusquedaBinariaINV('d', c_inv, 0, c_inv.size() - 1);
    if (resultado6 != -1) {
        cout << "El valor 'd' se encuentra en la posicion: " << resultado6 << endl;
    }

    vector<int> qs1 = {5, 2, 9, 1, 7};
    QuickSort(qs1, 0, qs1.size() - 1);
    cout << "QuickSort (último elemento como pivote): ";
    for (int v : qs1) cout << v << " ";
    cout << endl;

    vector<int> qs2 = {5, 2, 9, 1, 7};
    QuickSortFirstPivot(qs2, 0, qs2.size() - 1);
    cout << "QuickSort (primer elemento como pivote): ";
    for (int v : qs2) cout << v << " ";
    cout << endl;

    vector<int> qs3 = {5, 2, 9, 1, 7};
    QuickSortMiddlePivot(qs3, 0, qs3.size() - 1);
    cout << "QuickSort (elemento central como pivote): ";
    for (int v : qs3) cout << v << " ";
    cout << endl;

    return 0;
}

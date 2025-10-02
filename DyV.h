#include <vector>
#include <iostream>
using namespace std;


template <typename T>
int BusquedaBinaria(T x, const vector<T>& a, int ini, int fin) {
    if (ini > fin) { 
        cout << "No se ha encontrado el valor\n"; 
        return -1; 
    }
    int medio = (ini + fin) / 2;
    if (a[medio] == x) return medio;
    else if (a[medio] > x) return BusquedaBinaria(x, a, ini, medio - 1);
    else return BusquedaBinaria(x, a, medio + 1, fin);
}

template <typename T>
int BusquedaBinariaINV(T x, const vector<T>& a, int ini, int fin) {
    if (ini > fin) { 
        cout << "No se ha encontrado el valor\n"; 
        return -1; 
    }
    int medio = (ini + fin) / 2;
    if (a[medio] == x) return medio;
    else if (a[medio] < x) return BusquedaBinariaINV(x, a, ini, medio - 1);
    else return BusquedaBinariaINV(x, a, medio + 1, fin);
}

template <typename T>
void QuickSort(vector<T>& a, int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(a, ini, fin);
        QuickSort(a, ini, pivot - 1);
        QuickSort(a, pivot + 1, fin);
    }
}

template <typename T>
int Partition(vector<T>& a, int ini, int fin) {
    T x = a[fin];
    int i = ini;
    for (int j = ini; j < fin; j++) {
        if (a[j] <= x) {
            swap(a[i], a[j]);
            i++;
        } 
    }
    swap(a[i], a[fin]);
    return i;
}
template <typename T>
void QuickSortFirstPivot(vector<T>& a, int ini, int fin) {
    if (ini < fin) {
        int pivot = PartitionFirstPivot(a, ini, fin);
        QuickSortFirstPivot(a, ini, pivot - 1);
        QuickSortFirstPivot(a, pivot + 1, fin);
    }
}

template <typename T>
int PartitionFirstPivot(vector<T>& a, int ini, int fin) {
    T x = a[ini]; 
    int i = ini + 1;
    for (int j = ini + 1; j <= fin; j++) {
        if (a[j] < x) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[ini], a[i - 1]);
    return i - 1;
}


template <typename T>
void QuickSortMiddlePivot(vector<T>& a, int ini, int fin) {
    if (ini < fin) {
        int pivot = PartitionMiddlePivot(a, ini, fin);
        QuickSortMiddlePivot(a, ini, pivot - 1);
        QuickSortMiddlePivot(a, pivot + 1, fin);
    }
}

template <typename T>
int PartitionMiddlePivot(vector<T>& a, int ini, int fin) {
    int mid = ini + (fin - ini) / 2;
    swap(a[mid], a[fin]);
    T x = a[fin];
    int i = ini;
    for (int j = ini; j < fin; j++) {
        if (a[j] <= x) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[fin]);
    return i;
}

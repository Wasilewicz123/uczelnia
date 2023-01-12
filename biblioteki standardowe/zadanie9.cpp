/*Zaprojektuj funkcję, która zwróci indeks szukanej wartości w posortowanej tablicy liczb całkowitych. 
Funkcja powinna zwrócić -1, jeśli nie uda się znaleźć takiej wartości w tablicy.
 Rozwiązanie powinno być rozwiązaniem optymalnym. Napisz program, który przetestuje działanie tej funkcji. */

#include <iostream>
#include <cstdlib>

int binarySearch(int *arr, int l, int r, int x) {
    int mid = (l + r) / 2;
    if(mid <= r && mid >= l) {
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        else return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}



int main() {
    int arr[] = {1, 2, 3, 4, 10, 22, 23, 42};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    std::cout << (result == -1 ? "Brak" : std::to_string(result)) << std::endl;
    return 0;
}


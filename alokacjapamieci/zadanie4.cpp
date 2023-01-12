//Napisz funkcję, która przyjmie jako argumenty tablicę wartości zmiennoprzecinkowych, 
//jej rozmiar, dwie wartości zmiennoprzecinkowe - minimum i maksimum, 
//oraz wskaźnik n_out ustawiony na zmienną typu całkowitego. 
//Funkcja powinna zaalokować i zwrócić tablicę, w której znajdą się liczby z lewostronnie domkniętego przedziału od minimum do maksimum. 
//Pod wartością wskaźnika n_out z argumentu należy zapisać rozmiar nowoutworzonej tablicy.
#include<iostream>
#include<cstdlib>

#include <iostream>

int get_size(float arr[], int n, float min, float max) {
    int result = 0;
    for(int i = 0; i < n; ++i)
            if(arr[i] >= min && arr[i] < max)
                result++;
    return result;
}
void insert(float arr[], int n, float min, float max, float *result) {
    for(int i = 0, j = 0; i < n; ++i)
        if(arr[i] >= min && arr[i] < max)
            result[j++] = arr[i];
}
void print_arr(float arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] <<" ";
    std::cout << std::endl;
}
int main() {
    int n = 10;
    float *result = nullptr;
    float min = 1.13f, max = 6.3f;
    float arr[] = {0.5f, 0.7f, 1.25f, 6.25f, 9.3f, 1.13f, 2.23f, 3.2f, 6.23f, 1.78f};
    int size = get_size(arr, n, min, max);
    if(size) {
        result = new float[size];
        insert(arr, n, min, max, result);
        print_arr(result, size);
    } else std::cout << "Brak danych.\n";
    delete[] result;
    return 0;
}
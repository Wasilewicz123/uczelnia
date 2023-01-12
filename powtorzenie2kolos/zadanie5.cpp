#include <cstdlib>
#include <cstring>
#include <iostream>

int compare(const void* a, const void* b){
return strcmp((char*)a,(char*)b);
}

int main() {
    char arr[5][100]={"syn mlynarza", "popkiller", "awangarda", "szampan","chomik europejski"};
    qsort(arr, 5, 100, compare);
    for(int i = 0; i < 5; ++i) 
        std::cout << arr[i] << std::endl;
    return 0;
}
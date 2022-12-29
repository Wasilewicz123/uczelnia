// Napisz program, który wyświetli wartość liczby typu float ale interpretowanej jak gbyby była ona liczbą typu unisigned int. 
// Użyj odpowiednich rzutowań wskaźnikowych.
#include<iostream>

void function(float n ){
float *ptr = &n;
unsigned int* ptr2 = ((unsigned int*)ptr);
std::cout <<*ptr<< std::endl;
}






int main(){
float n;
std::cin >> n;
function(n);





    return 0;
}








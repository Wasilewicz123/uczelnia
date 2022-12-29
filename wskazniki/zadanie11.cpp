// Napisz funkcję iteracyjną i rekurencyjną, 
// która oblicza rozmiar napisu (char str[]). 

#include<iostream>

int f_it(char *str){
    int length = 0;
    while(*(str + ++length));
    return length;
}

int f_rec(char *str, int length){
    if(!(*(str+length))) return length;
    if( *(str+length)) return f_rec(str,length+1);
}



int main(){
char str[]= "Pierdolony kwiat lotosu";
std::cout <<f_rec(str,0);



    return 0;
}
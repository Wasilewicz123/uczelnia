//Napisz funkcję rekurencyjną, która zamienia liczbę binarną, reprezentowaną za pomocą napisu, 
//na liczbę całkowitą. Zademonstruj jej użycie.
//PRZYKŁAD:
//IN: "10010011"
//OUT: 147
#include<iostream>
#include<cmath>
int recFun(char str[],int position,int number,int sizeOfString){
number = (number<<1)|(str[position]-'0');
if(position==sizeOfString)  return number;
else return recFun(str,position+1,number,sizeOfString);
}
int main(){
char str[]="10010011";
int size;
for(int i=0;str[i];++i){
     size=i;
}
std::cout<<recFun(str,0,0,size);
return 0;
}



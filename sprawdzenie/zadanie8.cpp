//Napisz program, który pobiera od użytkownika dwie liczby jednobajtowe bez znaku t, s. Wylicz i wyświetl nową wartość w następujący sposób:
//1) zamień 4 najmłodsze bity liczby s miejscami z 4 najstarszymi bitami liczby s;
//2) w powstałej liczbie zaneguj bit znajdujący się na pozycji będącej wynikiem reszty z dzielenia t przez 8.
//PRZYKŁAD:
//t = 214; reszta z (t/8) = 6
//s = 93 = 0101 1101b
//1)   1101 0101b                          
//2)   1001 0101b = 149 
#include<cstdio>                        
int main(){
unsigned char t,s;
unsigned char tmp1,tmp2;
int mask;
scanf("%hhu\n%hhu",&t,&s);
tmp1=s<<4; 
tmp2=s>>4;
s=tmp1|tmp2;
t=(int)t%8;
mask=(1<<t);              
s=(s^mask); 
printf("%hhu", s);     
return 0;
}
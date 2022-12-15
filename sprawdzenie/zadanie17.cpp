//Pewną powierzchnię pokrywają nadajniki radiowe.
//Każdy nadajnik znajduje się w pozycji oznaczonej za pomocą współrzędnych x, y na słupie o wysokości z. 
//Każdy nadajnik zapewnia łączność w obszarze kuli o promieniu r, w której środku znajduje się nadajnik. 
//Osoba z odbiornikiem znajduje się w pozycji x, y na wysokości gruntu (z=0). Odbiornik połączy się z najbliższym nadajnikiem, w którego zasięgu będzie.
//Napisz funkcję, która przyjmie parametry: (1) liczbę n nadajników, (2/3/4) trzy tablice, po jednej dla współrzędnych (x, y, z) kolejnych nadajników,
//(5) promień r nadajników, (6, 7) współrzędne x, y osoby z odbiornikiem. Wszystkie współrzędne są liczbami zmiennoprzecinkowymi. 
//Funkcja powinna zwrócić indeks odbiornika, z którym połączy się odbiornik, lub -1, jeżeli nie połączy się z żadnym. 
//Zilustruj użycie tej funkcji w programie; wyświetl na ekranie wynik.
//PRZYKŁAD:
//IN: n=6, x[]={2,2,3,5,6,8}, y[]={2,6,3,7,1,6}, z[]={2,1,1.5,2,2,2}, r=2.5, x=7, y=2.
//OUT: 4
#include<iostream>
#include<cmath>
float function(int n, float x[],float y[], float z[], float r, float x1, float y1){
for(int i=0;i<n;i++){
if((sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2)))<=r && z[i]<=r) return i;
}
 return -1;
}
int main(){
int n=6;
float x[6]={2,2,3,5,6,8};
float y[6]={2,6,3,7,1,6};
float z[6]={2,1,1.5,2,2,2};
float r=2.5;
float x1=7,y1=2;
std::cout<<function(n,x,y,z,r,x1,y1);
return 0;
}
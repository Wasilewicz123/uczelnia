// Napisz program, 
// który wczyta od użytkownika dodatnią liczbę całkowitą r 
// i wyświetli na ekranie terminala koło zbudowane ze znaków ‘#’ o promieniu równym r (zgodnie z przykładem poniżej).
// Równanie koła ma postać: x^2+y^2 <= r^2. Do obliczenia pierwiastka kwadratowego użyj funkcji std::sqrt() z biblioteki <cmath>.
// PRZYKŁAD:
// IN: 3
// OUT: 
#include<iostream>
#include<cmath>
int main(){ 
int r;
std::cin>>r;
for(int i=(-r);i<=r;i++){
    for(int j=(-r);j<=r;j++){
        if(pow(i,2)+pow(j,2)<=pow(r,2)) std::cout<<"#";
        else std::cout<<" ";
    }
    std::cout<<"\n";
} 


return 0;
}


                                  
 

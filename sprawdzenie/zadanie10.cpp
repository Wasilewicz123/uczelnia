//Zdefiniuj funkcję, 
//która przyjmuje jako argumenty: napis str oraz automatyczną tablicę liczb całkowitych bez znaku occ o długości równej ilości znaków w napisie str.
//Funkcja powinna w i-ty element tablicy occ wpisać liczbę wystąpień (w całym napisie str) i-tego znaku z tego napisu.
//Napis str może zawierać jedynie małe i wielkie litery oraz spacje. Małe i wielkie litery zliczamy łącznie, jako ten sam znak.
//PRZYKŁAD:
//IN str = “Ala ma kota”
//OUT occ = [4, 1, 4, 2, 1, 4, 2, 1, 1, 1, 4]
#include<iostream>
void function(char str[],unsigned int occ[]){
    for(int i=0;str[i];i++){                                                                                        //char a ='a'; char b ='A' 32 roznicy
        for(int j=0;str[j];j++){
            if(str[i]==str[j] || str[i]==(str[j]+32) || str[i]==(str[j]-32) ) occ[i]++;
           
        }
    }
}
int main(){
char str[]="Alaa ma kota";
unsigned int occ[12]={0};
function(str,occ);
for(int i=0;i<12;i++){
    std::cout<<occ[i]<<" ";
}
    return 0;
}

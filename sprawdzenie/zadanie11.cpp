//Napisz program, który pobiera od użytkownika dwie liczby całkowite dodatnie n i m. 
//Następnie program ma generować i wyświetlać na ekranie pseudolosowe zdanie, które ma być zbudowane z n słów a każde słowo ma być zbudowane z co najwyżej m znaków.
//W słowach mają się pojawiać, z równym prawdopodobieństwem, małe i duże litery.
//PRZYKŁAD:
//IN: 8 5
//OUT: jtETN jxpd G DDYmP NYtT HubNe IAByV jmN
#include<iostream>
#include<cstdio>
#include<ctime>
int main(){
srand(time(0));
unsigned int n,m;
std::cin>>n;
std::cin>>m;
for(int i=0;i<n;i++){                                          
    int numberOfLetters=rand()%m+1;                         
    for(int j=0;j<m;j++){
       int UpperorLovercasse=rand()&2;
       if(UpperorLovercasse==0) std::cout<<(char)(rand()%26+65);
       if(UpperorLovercasse==1) std::cout<<(char)(rand()%26+97);
    }
    std::cout<<" ";
}
 return 0;
}

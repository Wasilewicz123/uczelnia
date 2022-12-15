//Napisz funkcję, która w argumencie przyjmuje napis (c-string) a następnie sprawdza, czy dany napis złożony jest z samych cyfr. 
//W przypadku, gdy napis składa się z samych cyfr, funkcja powinna zwrócić liczbę całkowitą, którą reprezentuje napis lub wartość -1 w przeciwnym wypadku. 
//W funkcji głównej wczytaj od użytkownika napis i wyświetl wynik działania funkcji.
//PRZYKŁADY:
//IN: "123ak"
//OUT: -1
//IN: "1001"
//OUT: 1001
#include<iostream>

 int function(char str[]){
    bool help=true;
    unsigned int number=0;
    for(int i=0;str[i];i++){
        if(str[i]<'0' || str[i]>'9') help=false;
      
    }
    if(help==false) return -1;
    else{
        for(int i=0;str[i];i++){
            number=(number<<1)|(str[i]-'0');
        }
    }
    return (unsigned int)number;
}

int main(){
    char str[]="123ak";
    std::cout<<function(str);
    return 0;
}
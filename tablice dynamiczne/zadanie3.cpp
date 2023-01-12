//Napisz funkcję, która dostaje jako parametr dynamiczną dwuwymiarową tablicę liczb całkowitych i jej wymiary n, m. 
//Funkcja ma zwrócić 0, jeśli na brzegach (tzn. w pierwszym i ostatnim wierszu oraz w pierwszej i ostatniej kolumnie) 
//tablicy występują wartości tylko zerowe; w przeciwnym razie funkcja ma zwrócić 1.
#include<iostream>
void fillArray(int **array,int n,int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            array[i][j]=5;
}

bool function(int **array, int n, int m){
    bool check = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0){
                if(array[i][j]==0) check = true;
                else{
                    break;
                }
            } 
            else if(j==0){
                if(array[i][j]==0) check = true;
                else{
                    check=false;
                    break;
                }
            } 
            if(i==n-1){
                if(array[i][j]==0) check = true;
                else{
                    check=false;
                    break;
                }
            }
            if(j==m-1){
                if(array[i][j]==0) check=true;
                else{
                    check=false;
                    break;
                }
            }
        }
    }
        if(check==false) return 1;
        if(check==true) return 0;
    return 0;
}
int main(){
int **array=new int*[5];
for(int i=0;i<5;i++){
    array[i]=new int[5];
}
fillArray(array,5,5);
std::cout<<function(array,5,5);
for(int i=0;i<5;i++)
    delete[] array[i];
delete[] array;
    return 0;
}
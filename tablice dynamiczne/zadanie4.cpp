//Napisz funkcję, wykona transpozycję macierzy przekazanej w parametrze.
//Macierz ma być reprezentowana za pomocą dynamicznie alokowanej tablicy dwuwymiarowej. 
//Jaką sygnaturę zaproponujesz dla implementowanej funkcji?
#include<iostream>
#include<ctime>

void fillMatrx_A(int **A, int n, int m){
srand(time(0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            A[i][j]=rand()%10;
}
void showMatrix_A(int** A, int n, int m){
    std::cout << "m = " << m << std::endl << "n = " << n << std::endl << std::endl
                << "Matrix A:" << std::endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            std::cout<<A[i][j]<<" ";
            std::cout<<std::endl;}
}

void fun(int **A, int **B,int n,int m){
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        B[j][i]=A[i][j];
}
void showMatrix_B(int**B,int n, int m){
std::cout<<"Matrix B=A^T"<<std::endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
        std::cout<<B[i][j]<<" ";
        std::cout<<std::endl;}
}

int main(){
int **A, **B, n,m;
std::cin>>m;
std::cout<<std::endl;
std::cin>>n;
A=new int*[n];
B=new int*[m];
for(int i=0;i<n;i++) A[i]=new int[m];
for(int j=0;j<m;j++) B[j]=new int[n]; 
fillMatrx_A(A,n,m);
showMatrix_A(A,n,m);
fun(A,B,n,m);
showMatrix_B(B,n,m);
for(int i = 0; i < n; i++ ) delete [ ] A [ i ];
for(int j = 0; j < m; j++ ) delete [ ] B [ j ];
delete [ ] A;
delete [ ] B;
return 0;
}
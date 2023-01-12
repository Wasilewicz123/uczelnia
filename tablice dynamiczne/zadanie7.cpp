#include<iostream>
#include<ctime>
#include<iomanip>
void mul(int **matrix1, int size1, int size2, int** matrix2, int size3, int size4, int **matrix) {
    for(int i = 0; i < size1; ++i){
      for(int j = 0; j < size2; ++j){
        for(int k = 0; k < size4; ++k){
              int s=0;
              s += matrix1[i][k] * matrix2[k][j];
              matrix[i][j]=s;
}
}
}
}  


void showMatrix(int **matrix, int size, int sizee){
   for(int i = 0; i < size; i++ )
  {
    for(int  j = 0; j < sizee; j++ ) std::cout << std::setw(6)<< matrix [ i ][ j ];
    std::cout << std::endl;
  }
}
int main(){
int size1,size2,size3,size4;
std::cin>>size1;
std::cin>>size2;
std::cin>>size3;
std::cin>>size4;
srand(time(NULL));
int**matrix1=new int *[size1];
int**matrix2=new int *[size3];
int**matrix = new int *[size1];
 
for( int i = 0; i < size1; i++ )
  {
    matrix1[ i ] = new int [ size2 ];
    matrix[ i ] = new int [ size4 ];
  }

  for(int i = 0; i < size3; i++ ) matrix2[ i ] = new int [size4];
  for( int i = 0; i < size1; i++ )
    for( int j = 0; j < size3; j ++ ) matrix1 [ i ][ j ]=rand()%10;



  for( int i = 0; i < size3; i++ )
    for( int j = 0; j < size4; j++ ) matrix2[ i ][ j ]=rand()%10;

  std::cout<<std::endl;
  showMatrix(matrix1,size1,size2);
  std::cout<<std::endl;
  showMatrix(matrix2,size3,size4);
  std::cout<<std::endl;
  mul(matrix1,size1,size2,matrix2,size3,size4,matrix);
  showMatrix(matrix,size1,size4);


    for(int  i = 0; i < size1; i++ )
  {
    delete [ ] matrix1[ i ];
    delete [ ] matrix [ i ];
  }

  for( int i = 0; i < size3; i++ ) delete [ ] matrix2 [ i ];
  delete [ ] matrix1;
  delete [ ] matrix2;
  delete [ ] matrix;

  return 0;
} 
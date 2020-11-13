#include <stdio.h>
 
int main() {
    
    int A, B;
    scanf("%i%i", &A, &B);
    
    if(A<B || B==0){
      printf("%i\n", A);
    }else if(A==B){
      printf("0\n");
    }else{
      do{
        A-=B;  
      }while(A>=B);
      printf("%i\n", A);
    }

    return 0;
}

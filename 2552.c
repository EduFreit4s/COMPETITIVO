#include <stdio.h>
#include <stdlib.h>

void xabu(int a, int b, int **m){
   int k, v[a][b];

    for(int i=0; i<a;i++) { 
        for(int j=0; j<b;j++) {
            v[i][j] = (m[i][j]==1) ? 9 : m[i][j];
        }
    }
    
    for(int y=0; y<a; y++){
        for(int x=0; x<b; x++){
            if(m[y][x]==0){
                k=0;
                if(y==0 && a>1){
                    if(m[y+1][x]!=0) k++;
                }else if(y==(a-1) && a>1){
                    if(m[y-1][x]!=0) k++;
                }else if(a>1){
                    if(m[y+1][x]!=0) k++;
                    if(m[y-1][x]!=0) k++;
                }
                if(x==0 && b>1){
                    if(m[y][x+1]!=0) k++;
                }else if(x==(b-1) && b>1){
                    if(m[y][x-1]!=0) k++;
                }else if(b>1){
                    if(m[y][x-1]!=0) k++;
                    if(m[y][x+1]!=0) k++;
                }
                v[y][x] = k;
            }
        }
    }

    for(int i=0; i<a;i++) 
        for(int j=0; j<b;j++) 
            m[i][j] = v[i][j];
        
}

int main(){

    int **m, L, C;

    fflush(stdin);
    while(scanf("%i%i", &L,&C)!=EOF){
        m = (int**)malloc(L*sizeof(int*));
        for(int i=0; i<L;i++) m[i] = (int*)malloc(C*sizeof(int));
        // leitura
        for(int i=0; i<L; i++){
            for(int j=0; j<C;j++){
                scanf("%i", &m[i][j]);
            }
        }
        // xabu
        xabu(L, C, m);
        // plotagem
        for(int i=0; i<L; i++){
            for(int j=0; j<C;j++){
                printf("%i ", m[i][j]); 
            }
            printf("\n");
        }
        free(m);
    }

    return 0;
}
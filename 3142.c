#include <stdio.h>
#include <math.h>
 
int main() {
 
    char txt[11];
    int k, size, i;

    while(scanf("%s",txt)!=EOF){
        size=k=i=0;
        while(txt[size]!='\0') size++;
        while(size-->0) k += ((int)txt[i++]-64)*pow(26, size);
        (k>16384 || k<1) ? printf("Essa coluna nao existe Tobias!\n") : printf("%i\n", k);
    }

    return 0;
}
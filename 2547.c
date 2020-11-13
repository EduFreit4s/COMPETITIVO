#include <stdio.h>
 
int main() {
 
    int p, min, max, h;

    while(scanf("%i%i%i", &p, &min, &max)!=EOF){
        int x=0;
        for(int i=0; i < p;i++){
            scanf("%i", &h);
            if(h >= min && h <= max) x++;
        }
        printf("%i\n", x);
    }
 
    return 0;
}


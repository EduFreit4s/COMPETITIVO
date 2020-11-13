#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    long long int N, M, T1, T2;
    while(scanf("%lld %lld", &N, &M)!=EOF){
        T1=T2=1;
        for(int i=1; i<=N; i++) T1*= i;
        for(int i=1; i<=M; i++) T2*= i;
        cout << (T1+T2) << "\n";
    }

    return 0;
}

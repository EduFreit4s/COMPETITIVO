#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int N, X, max;
    bool s_prime;
    cin >> N;

    for(int i=0;i<N;i++){
        s_prime = true;
        cin >> X;
        if(X==2){
            s_prime = true;
        }else if(X%2==0 or X<2){
            s_prime = false;
        }else{
            max = sqrt(X);
            for(int i=3; i<=max; i++){
                if(X%i==0){
                    s_prime = false;
                    i=max;
                }
            }
        }
        (s_prime) ?  cout << "Prime\n" : cout << "Not Prime\n";
    }

    return 0;
}

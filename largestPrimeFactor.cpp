#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


unsigned long long findPrimeEven(unsigned long long n){
    while(n % 2 == 0){
        n = n / 2;
    }
    if(n == 1) return 2;
    return n;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        unsigned long long max;
        cin >> n;
        n = findPrimeEven(n);
        unsigned long long i;
        for(i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                n = n / i;
                i = 1;
            }
        }
        
        if (n == 2){
             max = 2;
         } else if (n > 2){
            max = n;
        }else if(n < 2){
             max = i;
         }
        
        cout << max << endl;
    }
    return 0;
}


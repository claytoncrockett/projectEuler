
#include <iostream>
using namespace std;


unsigned long long sumFactors(unsigned long long n){
    unsigned long long sum = 0;
    unsigned long long thirds = n / 3;
    unsigned long long fifths = n / 5;
    unsigned long long fifteenths = n / 15;
    sum = (thirds * (thirds * 3 + 3)/2) + (fifths * (fifths * 5 + 5)/2) - (fifteenths * (fifteenths * 15 + 15)/2);
    return sum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        cin >> n;
        cout << sumFactors(n-1) << endl;
    }
    return 0;
}
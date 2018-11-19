
#include <vector>
#include <iostream>

using namespace std;



int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        long sum = 0;
        long num = 2;
        cin >> n;
        vector<long> fib;
        fib.push_back(1);
        fib.push_back(1);
        while (num < n){
            fib.push_back(num);
            num = fib[fib.size()-1] + fib[fib.size() - 2];
        }
        for(int i = 0; i < fib.size(); i++){
            if(fib[i] % 2 == 0) sum += fib[i];
        }
        cout << sum << endl;
    }
    return 0;
}
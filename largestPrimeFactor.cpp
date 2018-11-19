
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        vector<bool> numbers(n, true);
        for(int i = 2; i < numbers.size(); i += 2){
            numbers[i] = false;
        }
        for(int i = 4; i < numbers.size(); i += 3){
            numbers[i] = false;
        }
        for(int i = 8; i < numbers.size(); i += 5){
            numbers[i] = false;
        }
        int max = 2;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] == true && (n % (i+2) == 0)) max = i + 2;
        }
        cout << max << endl;
    }
    return 0;
}
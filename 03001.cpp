#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int tien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    while(t--){
        int n; cin >> n;
        int to = 0;
        while(n){
            for(int i = 9; i >= 0; i--){
                if(n >= tien[i]){
                    int c = n / tien[i];
                    to += c;
                    n %= tien[i];
                }
            }
        }
        cout << to << endl;
        //1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
        
    }
}
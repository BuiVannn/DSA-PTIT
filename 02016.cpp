#include <bits/stdc++.h>
using namespace std;

int n;
int a[20][20], cot[100], c1[100], c2[100];
int x[20];
int cnt;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 1 && c1[i - j + n] == 1 && c2[i + j - 1] == 1){
            cot[j] = c1[i - j + n] = c2[i + j - 1] = 0;
            x[i] = j;
            if(i == n){
                cnt++;
            }
            else{
                Try(i + 1);
            }
            cot[j] = c1[i - j + n] = c2[i + j - 1] = 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        for(int i = 0; i < 99; i++){
            cot[i] = c1[i] = c2[i] = 1;
        }
        Try(1);
        cout << cnt << endl;
    }
}
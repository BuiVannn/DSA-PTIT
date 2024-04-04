#include <bits/stdc++.h>
using namespace std;

int a[10], n, dd[10];
char k;
char c[10] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
//1 5
void Init(){
    cin >> k;
    n = int(k - 'A'+1);
    for(int i = 1; i <= n; i++){
        a[i] = i;
        dd[i] = 0;
    }
}

void In(){
    for(int i = 1; i <= n; i++){
        cout << c[a[i]];
    }
    cout << endl;
}
void Try(int m){
    if(m > n){
        int ok = 0;
        int ok2 = 0;
        //if(a[1] == 1 && a[2] != 5) ok = 0;
        //if(a[n] == 1 && a[n - 1] != 5) ok = 0;
        //if(a[1] == 5 && a[2] != 1) ok = 0; 
        //if(a[n] == 5 && a[n - 1] != 1) ok = 0;
        /*for(int i = 2; i <= n - 1; i++){
            if(a[i] == 1){
                if(a[i-1] != 5 && a[i+1] != 5) ok = 0;
            }
            if(a[i] == 5){
                if(a[i-1] != 1 && a[i+1] != 5) ok = 0;
            }
        }*/
        if((a[1] == 1 && n < 5) || (a[n] == 1 && n < 5)) ok = 1;
        if((a[1] == 1 && a[n] == 5) || (a[1] == 5 && a[n] == 1)) ok = 1;
        for(int i = 1; i <= n-1; i++){
            if(a[i] == 1 && a[i+1] == 5) ok = 1;
            if(a[i] == 5 && a[i+1] == 1) ok = 1;
        }
        if(ok) In();
        return;
    }
    for(int i = 1; i <= n; i++){
        if(dd[i] == 0){
            a[m] = i;
            dd[i] = 1;
            Try(m + 1);
            dd[i] = 0;
        }
    }
}

void res(){
    for(int i = 1; i <= n; i++) dd[i] = 0;
    Try(1);
}

int main(){
    Init();
    //cout << n << endl;
    Try(1);
}
#include <bits/stdc++.h>
using namespace std;

int a[10], n, dd[10];

//1 5
void Init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
        dd[i] = 0;
    }
}

void In(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int m){
    if(m > n){
        int ok = 1;
        for(int i = 1; i < n; i++){
            if(abs(a[i] - a[i+1]) == 1) ok = 0;
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
    int t; cin >> t;
    while (t--)
    {
        Init();
        Try(1);
    }
    
}
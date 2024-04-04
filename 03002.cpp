#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int a1 = 0, b1 = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6'){
            a1 = a1 * 10 + 5;
        }  
        else{
            a1 = a1 * 10 + a[i] - '0';
        }
    }

    for(int i = 0; i < b.size(); i++){
        if(b[i] == '6'){
            b1 = b1 * 10 + 5;
        }  
        else{
            b1 = b1 * 10 + b[i] - '0';
        }
    }
    cout << a1 + b1 << ' ';
    int a2 = 0, b2 = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5'){
            a2 = a2 * 10 + 6;
        }  
        else{
            a2 = a2 * 10 + a[i] - '0';
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '5'){
            b2 = b2 * 10 + 6;
        }  
        else{
            b2 = b2 * 10 + b[i] - '0';
        }
    }
    cout << a2 + b2;
}
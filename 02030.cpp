#include <bits/stdc++.h>
using namespace std;

char c;
int k;

void Try(string s, char x){
    if(s.size() == k){
        cout << s << endl;
        return;
    }
    for(int i = x; i < c + 1; i++){
        Try(s + string(1, i), i);
    }
}
int main(){
    cin >> c >> k;
    Try("", 'A');
}
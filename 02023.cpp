#include <bits/stdc++.h>
using namespace std;
int n, k;
vector <string> v;
int a[100];

void init(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void qlth(int i){
    for(int j = a[i - 1] + 1; j <= v.size() - k + i; j++){
        a[i] = j;
        if(i == k){
            for(int l = 1; l <= k; l++) cout << v[a[l] - 1] << ' ';
            cout << endl;
        }
        else qlth(i + 1);
    }
}
int main(){
    cin >> n >> k;
    set <string> s;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        s.insert(x);
    }
    
    for(set <string> :: iterator i = s.begin(); i != s.end(); i++){
        v.push_back(*i);
    }
    init();
    //for(int i = 0; i < k; i++) cout << a[i] << ' ';
    qlth(1);

}
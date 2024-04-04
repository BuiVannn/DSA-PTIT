#include <bits/stdc++.h>
using namespace std;
string a[4] = {"", "A", "B", "C"};

void in(int start, int end){
    cout << a[start] << " -> " << a[end] << endl;
    
}
void hn(int n, int start, int end){
    if(n == 1) in(start, end);
    else{
        int other = 6 - (start + end);
        hn(n - 1, start, other);
        in(start, end);
        hn(n - 1, other, end);
    }
}
int main(){
    int n;
    cin >> n;
    hn(n, 1, 3);
}
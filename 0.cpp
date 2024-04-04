#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream in("D:/c++ codeptit/PTIT.in.txt", ios::in);
    ofstream out("D:/c++ codeptit/PTIT.out.txt", ios::out);
    char s;
    while(in >> s){
        out << s;
        
    }
    in.close();
    out.close();
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    int vohuong = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]) vohuong = 0;
        }
    }
    cout << "chuyen tu ma tran ke sang danh sach ke" << endl;
    vector <int> b[1001];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]){
                b[i].push_back(j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << "Ke(" << i + 1 << "): ";
        for(int j = 0; j < b[i].size(); j++){
            cout << b[i][j] + 1 << ' ';
        }
        cout << endl;
    }

    cout << endl;
    cout << "chuyen tu ma tran ke sang danh sach canh" << endl;
    cout << "Dinh dau      Dinh cuoi " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vohuong){
                if(a[i][j] && j > i){
                    cout << i + 1 << "                " << j + 1 << endl;
                }
            }
            else{
                if(a[i][j]){
                    cout << i + 1 << "                " << j + 1 << endl;
                }                
            }
        }
    }
}
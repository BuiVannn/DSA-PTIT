#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
//	cout << a << " " << b;
	int tong = a+ b;
	int hieu=a-b;
	long long tich=(long long)a*b;
	float thuong = (float)a/b;
	cout << tong << " " << hieu <<" " << tich<<" " << fixed << setprecision(2) << thuong;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int x;
	float a;
	cin >>a;
	cout << fixed << setprecision(2) << a <<endl;
	char c;
	cin >>x >>c;
	cout << x << " " << c;
}
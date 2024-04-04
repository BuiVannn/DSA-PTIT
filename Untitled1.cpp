//ve tam giac rong
#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(i<n){
				if(abs(n-j)+1==i) printf("*");
			else printf(" ");
			}
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		printf("* ");
	}
}
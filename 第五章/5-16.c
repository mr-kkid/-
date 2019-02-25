#include<stdio.h>

int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,j,cnt;
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++){
				printf(" ");
			}
			for(j=1;j<=2*i-1;j++){
				printf("*");
			}
			printf("\n");
		}
		cnt=n-1;
		for(i=1;i<=n-1;i++){
			for(j=1;j<=i;j++){
				printf(" ");
			}
			for(j=1;j<=2*cnt-1;j++){
				printf("*");
			}
			printf("\n");
			cnt--;
		}
	}
	return 0;
}
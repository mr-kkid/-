#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		while(n){
			printf("%d",n%10);
			n/=10;
		}
		printf("\n");
	}
	return 0;
}
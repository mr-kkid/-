#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0){
		puts("Yes");
	}
	else{
		puts("No");
	}
	return 0;
}
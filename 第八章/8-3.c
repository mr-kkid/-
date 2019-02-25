#include<stdio.h>
#include<math.h>

int judge(int n){
	int i;
	if(n==0||n==1){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		if(judge(n)){
			puts("prime");
		}
		else{
			puts("not prime");
		}
	}
	return 0;
}
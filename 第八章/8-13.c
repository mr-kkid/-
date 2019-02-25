#include<stdio.h>
#include<stdlib.h>

int fun(int x,int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return x;
	}
	else{
		return (2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2)/n;
	}
}

int main(){
	int n,x;
	while(~scanf("%d%d",&x,&n)){
		printf("%d\n",fun(x,n));
	}
	return 0;
}
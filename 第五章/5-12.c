#include<stdio.h>

int fun(int n){
	if(n==10){
		return 1;
	}
	else{
		return (fun(n+1)+1)*2;
	}
}

int main(){
	printf("%d\n",fun(1));
}
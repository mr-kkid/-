#include<stdio.h>
#include<math.h>


int judge(int m){
	int i;
	int n=sqrt(m);
	for(i=2;i<=n;i++){
		if(m%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int i;
	for(i=100;i<=200;i++){
		if(judge(i)==1){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
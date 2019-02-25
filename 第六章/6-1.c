#include<stdio.h>
#include<math.h>

int judge(int m){
	int i;
	for(i=2;i<=sqrt(m);i++){
		if(m%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int i;
	for(i=2;i<=100;i++){
		if(judge(i)){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
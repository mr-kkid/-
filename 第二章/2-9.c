#include<stdio.h>

int main(){
	int i;
	for(i=1900;i<=2000;i++){
		if((i%4==0&&i%100!=0)||(i%100==0&&i%400==0)){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
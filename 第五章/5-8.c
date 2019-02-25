#include<stdio.h>

int main(){
	long i;
	for(i=0;i<=10000;i++){
		long temp=i,ans=0;
		while(temp){
			long cur=temp%10;
			temp/=10;
			ans+=cur*cur*cur;
		}
		if(ans==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
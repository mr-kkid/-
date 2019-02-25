#include<stdio.h>
int main(){
	long ans=0;
	int i;
	long temp=1;
	for(i=1;i<=20;i++){
		temp=temp*i;
		ans+=temp;
	}
	printf("%lld\n",ans);
	return 0;
}
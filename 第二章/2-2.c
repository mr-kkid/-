#include<stdio.h>
int main(){
	int ans=-0x7f7f7f7f;
	int a,i;
	for(i=0;i<10;i++){
		scanf("%d",&a);
		ans=ans>a?ans:a;
	}
	printf("%d\n",ans);
}
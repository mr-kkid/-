#include<stdio.h>

int main(){
	double ans=0;
	int temp,top=2,bottom=1,i;
	for(i=1;i<=20;i++){
		ans+=top*1.0/bottom;
		temp=top;
		top=bottom+top;
		bottom=temp;
	}
	printf("%lf\n",ans);
	return 0;
}
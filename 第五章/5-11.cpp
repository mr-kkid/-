#include<stdio.h>
int main(){
	double ans=100,h=100,r=0.5;
	int i;
	for(i=1;i<=10;i++){
		h*=0.5;
		printf("%d--->%lf  %lf\n",i,h,ans);
		ans+=h*2;
	}
	printf("%lf %lf\n",ans,h);
	return 0;
}
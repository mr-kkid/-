#include<stdio.h>
#include<math.h>
int main(){
	double d=300000;
	double p=6000;
	double r=0.01;
	double m=log(p/(p-d*r))/log(1+r);
	int ans=ceil(m);
	printf("%d\n",ans);
	return 0;
}
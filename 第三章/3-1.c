#include<stdio.h>
int main(){
	int i;
	double r=0.09,sum=1.0;
	for(i=0;i<10;i++){
		sum*=(1.0+r);
	}
	printf("%lf\n",sum);
	return 0;
}
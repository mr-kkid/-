#include<stdio.h>
int main(){
	long ans_1=0,ans_2=0;
	double ans_3=0;
	int i;
	for(i=1;i<=100;i++){
		ans_1+=i;
	}
	for(i=1;i<=50;i++){
		ans_2+=i*i;
	}
	for(i=1;i<=10;i++){
		ans_3+=1.0/i;
	}
	printf("%ld %ld %lf\n",ans_1,ans_2,ans_3);
	return 0;
}
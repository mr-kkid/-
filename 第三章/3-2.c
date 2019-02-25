#include<stdio.h>


double fun1(int n){//一年期
	double r=0.0414;
	int i;
	double sum=1000;
	for(i=0;i<n;i++){
		sum*=(1+r);
	}
	return sum;
}

double fun2(int n){//两年期
	double r=0.0468;
	int i;
	double sum=1000;
	sum*=(1+2*r);
	sum*=(1+3*0.054);
	return sum;
}

double fun3(int n){//三年期
	double r=0.054;
	int i;
	double sum=1000;
	sum*=(1+3*r);
	sum*=(1+2*0.0468);
	return sum;
}

double fun4(int n){//五年期
	double r=0.0585;	
	int i;
	double sum=1000;
	sum*=(1+5*r);
	return sum;
}

double fun5(int n){//活期
	double r=0.0072;
	int i;
	double sum=1000;
	for(i=0;i<4*n;i++){
		sum*=(1+r/4.0);
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	fun1(n);fun2(n);fun3(n);fun4(n);fun5(n);
}
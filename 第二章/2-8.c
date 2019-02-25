#include<stdio.h>
#include<math.h>


int main(){
	double a,b,c,m;
	scanf("%lf%lf%lf",&a,&b,&c);
	m=b*b-4.0*a*c;
	if(m>0){
		double x1=(-b+sqrt(m))/(2.0*a);
		double x2=(-b-sqrt(m))/(2.0*a);
	}
	else{
		double x=(-b+sqrt(m))/(2.0*a);
	}
	return 0;
}


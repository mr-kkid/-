#include<stdio.h>
#include<math.h>


int main(){
	double a,b,c,m;
	scanf("%lf%lf%lf",&a,&b,&c);
	m=b*b-4.0*a*c;
	if(m>0){
		double x1=(-b+sqrt(m))/(2.0*a);
		double x2=(-b-sqrt(m))/(2.0*a);
		printf("x1=%lf\nx2=%lf\n",x1,x2);
	}
	else if(m==0){
		double x=(-b+sqrt(m))/(2.0*a);
		printf("x=%lf\n",x);
	}
	else{
		printf("нч╫Б\n");
	}
	return 0;
}


#include<stdio.h>
#include<math.h>

double fun(double x){
	return 2*x*x*x-4*x*x+3*x-6;
}

int main(){
	double top=10,bottom=-10;
	double mid;
	while(bottom<top){
		mid=(top+bottom)/2.0;
		if(fabs(fun(mid))<1e-6){
			break;
		}
		else if(fun(mid)>0){
			top=mid;
		}
		else{
			bottom=mid;
		}
	}
	printf("%lf\n",mid);
	return 0;
}
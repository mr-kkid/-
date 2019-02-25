#include<stdio.h>
#include<math.h>

int main(){
	double pi=acos(-1);
	double r,h,ans_1,ans_2,ans_3,ans_4,ans_5,ans_6,ans_7;
	//printf("%lf\n",pi);
	scanf("%lf%lf",&r,&h);
	//圆周长
	ans_1=2*pi*r;
	//圆面积
	ans_2=pi*r*r;
	//圆球表面积
	ans_3=4*pi*r*r;
	//圆球体积
	ans_4=4.0/3*pi*r*r*r;
	//圆柱体积
	ans_5=pi*r*r*h;

	printf("%lf %lf %lf %lf %lf\n",ans_1,ans_2,ans_3,ans_4,ans_5);
	return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
	double pi=acos(-1);
	double r,h,ans_1,ans_2,ans_3,ans_4,ans_5,ans_6,ans_7;
	//printf("%lf\n",pi);
	scanf("%lf%lf",&r,&h);
	//Բ�ܳ�
	ans_1=2*pi*r;
	//Բ���
	ans_2=pi*r*r;
	//Բ������
	ans_3=4*pi*r*r;
	//Բ�����
	ans_4=4.0/3*pi*r*r*r;
	//Բ�����
	ans_5=pi*r*r*h;

	printf("%lf %lf %lf %lf %lf\n",ans_1,ans_2,ans_3,ans_4,ans_5);
	return 0;
}
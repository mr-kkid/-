#include<stdio.h>
int main(){
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("%d %d %f %f %c %c\n",a,b,x,y,c1,c2);
	return 0;
}
/*
a=3b=7
8.5 71Aa
*/
#include<stdio.h>

void sort(int* a,int *b,int *c){
	int temp;
	if(*a>*b){
		temp=*a;
		*a=*b;
		*b=temp;
	}
	if(*a>*c){
		temp=*a;
		*a=*c;
		*c=temp;
	}
	if(*b>*c){
		temp=*b;
		*b=*c;
		*c=temp;
	}
}

int main(){
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c)){
		sort(&a,&b,&c);
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
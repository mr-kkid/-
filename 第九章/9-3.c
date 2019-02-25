#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void input(int a[],int n){
	unsigned t=time(NULL);
	int i;
	srand(t);
	for(i=0;i<n;i++){
		*(a+i)=rand()%20;
	}	
}

void fun(int a[],int n){
	int i,min_pos=0,max_pos=0;
	for(i=1;i<n;i++){
		if(a[i]<a[min_pos]){
			min_pos=i;
		}
		if(a[i]>a[max_pos]){
			max_pos=i;
		}
	}
	swap(a+0,a+min_pos);
	swap(a+n-1,a+max_pos);
}

void output(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf(i==n-1?"%d\n":"%d ",a[i]);
	}
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[100];
		input(a,n);
		output(a,n);
		fun(a,n);
		output(a,n);
	}
	return 0;
}
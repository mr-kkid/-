#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cmp(const void* t1,const void* t2){
	return *(int*)t2-*(int*)t1;
}

void swap(int* t1,int *t2){
	int temp=*t1;
	*t1=*t2;
	*t2=temp;
}

void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		unsigned t=time(NULL);
		int i,a[10000];
		srand(t);
		for(i=0;i<n;i++){
			a[i]=rand()%1000;
		}
		qsort(a,n,sizeof(int),cmp);
		print(a,n);
		for(i=0;i<n/2;i++){
			swap(&a[i],&a[n-1-i]);
		}
		print(a,n);
	}
	return 0;
}
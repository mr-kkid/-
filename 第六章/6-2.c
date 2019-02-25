#include<stdio.h>
#include<stdlib.h>

void swap(int* t1,int *t2){
	int temp=*t1;
	*t1=*t2;
	*t2=temp;
}

void sort(int a[],int n){
	int pos,i,j;
	for(i=0;i<n;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[pos]){
				pos=j;
			}
		}
		if(pos!=i){
			swap(&a[pos],&a[i]);
		}
	}
}

int main(){
	int a[20],i;
	srand(1);
	for(i=0;i<20;i++){
		a[i]=rand()%100;
	}
	sort(a,20);
	for(i=0;i<20;i++){
		printf("%d ",a[i]);
	}printf("\n");
	return 0;
}
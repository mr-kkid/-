#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* t1,int *t2){
	int temp=*t1;
	*t1=*t2;
	*t2=temp;
}

void tranvert(int a[][200],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			swap(&a[i][j],&a[j][i]);
		}
	}
}

void print(int a[][200],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(j==n-1?"%d ":"%d ",a[i][j]);
		}printf("\n");
	}
}

int main(){
	int n=3;
	//while(~scanf("%d",&n)){
		int i,j,a[200][200];
		unsigned t=time(NULL);
		//srand(t);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		//print(a,n);
		tranvert(a,n);
		print(a,n);
	//}
	return 0;
}
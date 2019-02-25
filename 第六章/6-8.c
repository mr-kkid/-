#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int a[][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}printf("\n");
	}
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		unsigned t=time(NULL);
		int i,j,a[100][100];
		int k,pos,flag;
		srand(t);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				a[i][j]=rand()%1000;
			}
		}print(a,n);
		for(i=0;i<n;i++){
			pos=0;flag=1;
			for(j=0;j<n;j++){
				if(a[i][j]>a[i][pos]){
					pos=j;
				}
			}
			for(k=0;k<n;k++){
				if(a[k][pos]<a[i][pos]){
					flag=0;
					break;
				}
			}
			if(flag){
				printf("%d %d\n",i,pos);
			}
		}
	}
	return 0;
}
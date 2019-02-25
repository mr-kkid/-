#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cmp(const void* t1,const void* t2){
	return *(int*)t1-*(int*)t2;
}

void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int m,i,n;
	while(~scanf("%d%d",&n,&m)){
		unsigned t=time(NULL);
		int a[1000];
		srand(t);
		for(i=0;i<n;i++){
			a[i]=rand()%1000;
		}
		qsort(a,n,sizeof(int),cmp);
		print(a,n);
		for(i=n-1;i>=0&&a[i]>=m;i--){
			a[i+1]=a[i];
		}
		a[i+1]=m;
		n++;
		print(a,n);
	}
	return 0;
}
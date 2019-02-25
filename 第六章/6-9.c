#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cmp(const void* t1,const void* t2){
	return *(int*)t2-*(int*)t1;
}

void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
}

int main(){
	int n,m;
	while(~scanf("%d",&n)){
		unsigned t=time(NULL);
		int i,a[100];		
		int l=0,r=n-1;
		int flag=0,mid;
		srand(t);
		for(i=0;i<n;i++){
			a[i]=rand()%1000;
		}
		qsort(a,n,sizeof(int),cmp);
		print(a,n);printf("输入要查找的数：\n");scanf("%d",&m);
		while(l<r){
			mid=(l+r)/2;
			if(a[mid]>m){
				l=mid+1;
			}
			else if(a[mid]<m){
				r=mid-1;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag){
			printf("%d\n",mid);
		}
		else{
			printf("No Answer!\n");
		}
	}
	return 0;
}
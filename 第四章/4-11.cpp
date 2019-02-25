#include<stdio.h>

void quick_sort(int num[],int l,int r){
	if(l>=r){
		return ;
	}
	int left=l,right=r;
	int cur=num[l];
	while(l<r){
		while(l<r&&num[r]>=cur){
			r--;
		}
		if(l<r){
			num[l]=num[r];
			l++;
		}
		while(l<r&&num[l]<=cur){
			l++;
		}
		if(l<r){
			num[r]=num[l];
			r--;
		}
	}
	num[l]=cur;
	quick_sort(num,left,l-1);
	quick_sort(num,l+1,right);
}

int main(){
	int a[4],i;
	while(~scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])){
		quick_sort(a,0,3);
		for(i=0;i<4;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
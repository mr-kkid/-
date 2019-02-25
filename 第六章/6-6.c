#include<stdio.h>
#include<string.h>

void print(int a[][100],int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[100][100],i,j;
		memset(a,0,sizeof(a));
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				if(j==1||j==i){
					a[i][j]=1;
				}
				else{
					a[i][j]=a[i-1][j]+a[i-1][j-1];
				}
			}
		}
		print(a,n);
	}
	return 0;
}
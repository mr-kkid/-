#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n;
	while(~scanf("%d",&n)){
		unsigned t=time(NULL);
		int a[20][20],i,j,ans=0;
		srand(t);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				a[i][j]=rand()%100;	
			}
		}
		/*for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}printf("\n");
		}*/
		for(i=0;i<n;i++){
			if(i==n-1-i){
				ans+=a[i][i];
			}
			else{
				ans+=a[i][i]+a[i][n-1-i];
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}
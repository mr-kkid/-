#include<stdio.h>

int main(){
	int a,n;
	while(~scanf("%d%d",&a,&n)){
		int temp=0;
		int i,ans=0;
		for(i=1;i<=n;i++){
			temp=temp*10+a;
			ans+=temp;
		}
		printf("%d\n",ans);
	}
	return 0;
}
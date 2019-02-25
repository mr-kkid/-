#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=1000;i++){
		int temp=i;
		int j;
		int ans=1;
		for(j=2;j<i;j++){
			if(temp%j==0){
				ans+=j;
			}
		}
		if(ans==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
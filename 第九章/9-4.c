#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n,m;
	while(~scanf("%d",&n,m)){
		unsigned t=time(NULL);
		int i,a[20];
		srand(t);
		for(i=0;i<n;i++){
			a[i]=rand()%20;
		}
	}
	return 0;
}
#include<stdio.h>

int fun1(int n,int m){
	while(m!=0){
		int temp=n%m;
		n=m;
		m=temp;
	}
	return n;
}

int fun2(int n,int m,int ans1){
	return n*m/ans1;
}

int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		int ans1=fun1(n,m);
		int ans2=fun2(n,m,ans1);
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}

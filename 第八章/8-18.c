#include<stdio.h>
int m_d[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,//0:Æ½Äê
				0,31,29,31,30,31,30,31,31,30,31,30,31};//1:ÈòÄê

int judge(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return 1;
	}
	return 0;
}

int fun(int y,int m,int d){
	int op=judge(y);
	int i,ans=0;
	for(i=1;i<m;i++){
		ans+=m_d[op][i];
	}
	return ans+=d;
}

int main(){
	int y,m,d;
	while(~scanf("%d/%d/%d",&y,&m,&d)){
		printf("%d\n",fun(y,m,d));
	}
	return 0;
}
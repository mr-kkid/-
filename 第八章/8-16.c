#include<stdio.h>

int judge(char ch){
	switch(ch){
		case 'a':return 10;case 'A':return 10;
		case 'b':return 11;case 'B':return 11;
		case 'c':return 12;case 'C':return 12;
		case 'd':return 13;case 'D':return 13;
		case 'e':return 14;case 'E':return 14;
		case 'f':return 15;case 'F':return 15;
		default:return ch-'0';
	}
}

int main(){
	char str[200];
	while(~scanf("%s",str)){
		int len=strlen(str),i;
		long ans=0,cur=1;
		for(i=len-1;i>=0;i--){
			ans+=cur*judge(str[i]);
			cur*=16;
		}
		printf("%ld\n",ans);
	}
	return 0;
}
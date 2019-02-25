#include<stdio.h>
#include<string.h>

char* fun(char* str){
	int max=0,cnt=0;
	char *ans,*temp;
	char* str1=(char*)malloc(sizeof(char)*200);
	do{
		if(*str==' '||*str=='	'||*str=='\0'){
			if(cnt>max){
				max=cnt;
				ans=temp;
			}cnt=0;
		}
		else{
			if(cnt==0){
				temp=str;
			}
			cnt++;
		}
	}while(*str++!='\0');
	temp=str1;
	while(max--){
		*temp++=*ans++;
	}*temp='\0';
	return str1;
}

int main(){
	char str[200],str1[200];
	while(gets(str)!=NULL){
		char* ans=fun(str);
		puts(ans);
	}
	return 0;
}
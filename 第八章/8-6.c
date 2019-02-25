#include<stdio.h>
#include<string.h>

void cat(char* str1,char* str2){
	if(str1==NULL||str2==NULL){
		return ;
	}
	else{
		int len=strlen(str1);
		str1+=len;
		while((*str1++=*str2++)!='\0');
	}
}

int main(){
	char str1[200],str2[200];
	while(gets(str1)!=NULL){
		gets(str2);
		cat(str1,str2);
		puts(str1);
	}
	return 0;
}
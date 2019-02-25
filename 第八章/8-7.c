#include<stdio.h>
#include<string.h>

void fun(char* str1,char* str2){
	int len=strlen(str2);
	if(str1==NULL||str2==NULL){
		return ;
	}

	while(*str2!='\0'){
		if(*str2=='a'||*str2=='o'||*str2=='e'||*str2=='i'||*str2=='u'){
			*str1++=*str2;
		}
		else if(*str2=='A'||*str2=='O'||*str2=='E'||*str2=='I'||*str2=='U'){
			*str1++=*str2;
		}
		str2++;
	}*str1=*str2;
}

int main(){
	char str1[200],str2[200];
	while(gets(str1)!=NULL){
		gets(str2);
		fun(str1,str2);
		puts(str1);
	}
	return 0;
}
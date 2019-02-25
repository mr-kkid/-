#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cpy(char* s1,char* s2){
	if(s1==NULL||s2==NULL){
		return ;
	}
	while((*s1++=*s2++)!='\0');
}

int main(){
	char s1[200],s2[200];
	while(gets(s1)!=NULL){
		gets(s2);
		cpy(s1,s2);
		puts(s1);
	}
	return 0;
}
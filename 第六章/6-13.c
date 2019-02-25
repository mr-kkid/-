#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str_1[200],str_2[200],len,i;
	while(gets(str_1)!=NULL){
		gets(str_2);
		len=strlen(str_1);
		for(i=0;str_2[i]!='\0';i++){
			str_1[len++]=str_2[i];
		}str_1[len]='\0';
		puts(str_1);
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char* ch1,char* ch2){
	char temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}

void reverse(char* str){
	int i,len=strlen(str);
	for(i=0;i<len/2;i++){
		swap(&str[i],&str[len-1-i]);
	}
}

int main(){
	char str[1000];
	while(gets(str)!=NULL){
		reverse(str);
		puts(str);
	}
	return 0;
}
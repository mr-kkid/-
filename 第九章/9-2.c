#include<stdio.h>
#include<string.h>

void swap(char* s1,char* s2){
	char temp[200];
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
}

void sort(char* s1,char* s2,char* s3){
	if(strcmp(s1,s2)>0){
		swap(s1,s2);
	}
	if(strcmp(s1,s3)>0){
		swap(s1,s3);
	}
	if(strcmp(s2,s3)>0){
		swap(s2,s3);
	}
}

int main(){
	char str1[200],str2[200],str3[200];
	while(gets(str1)!=NULL){
		gets(str2);
		gets(str3);
		sort(str1,str2,str3);
		printf("ÅÅĞòºó:\n%s\n%s\n%s\n",str1,str2,str3);
	}
	return 0;
}
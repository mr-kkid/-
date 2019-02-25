#include<stdio.h>
#include<string.h>

int cmp(char* str1,char* str2){
	int len1=strlen(str1),len2=strlen(str2);
	int i=0,j=0;
	while(i<len1&&j<len2){
		if(str1[i]!=str2[j]){
			return str1[i]-str2[j];
		}
		i++;
		j++;
	}
	if(i==len1&&j==len2){
		return 0;
	}
}

int main(){
	char str1[200],str2[200];
	while(gets(str1)!=NULL){
		gets(str2);
		printf("%d\n",cmp(str1,str2));
	}
	return 0;
}
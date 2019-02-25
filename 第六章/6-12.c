#include<stdio.h>

int upper_char[26];
int lower_char[26];

int main(){
	int i;
	char str[200];
	for(i=0;i<26;i++){
		upper_char[i]='A'+i;
	}
	for(i=0;i<26;i++){
		lower_char[i]='a'+i;
	}
	
	while(gets(str)!=NULL){
		int i,len=strlen(str);
		for(i=0;i<len;i++){
			if(str[i]>='A'&&str[i]<='Z'){
				str[i]=upper_char[(25-(str[i]-'A'))%26];
			}
			else if(str[i]>='a'&&str[i]<='z'){
				str[i]=lower_char[(25-(str[i]-'a'))%26];
			}
		}
		puts(str);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

void swap(char* t1,char* t2){
	char temp=*t1;
	*t1=*t2;
	*t2=temp;
}

void fun(char* str){
	int i,j,len=strlen(str),flag;
	for(i=0;i<len-1;i++){
		flag=0;
		for(j=0;j<len-1-i;j++){
			if(str[j]>str[j+1]){
				swap(&str[j],&str[j+1]);
				flag=1;
			}
		}
		if(!flag){
			return ;
		}
	}

}

int main(){
	char str[200];
	while(gets(str)!=NULL){
		fun(str);
		puts(str);
	}
	return 0;
}
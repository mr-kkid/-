#include<stdio.h>
#include<string.h>

int main(){
	char str[1000000];
	while(gets(str)!=NULL){
		int num[4]={0,0,0,0};
		int i,len=strlen(str);
		for(i=0;i<len;i++){
			if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
				num[0]++;
			}
			else if(str[i]==' '||str[i]=='	'||str[i]=='\n'){
				num[1]++;
			}
			else if(str[i]>='0'&&str[i]<='9'){
				num[2]++;
			}
			else{
				num[3]++;
			}
		}
		for(i=0;i<4;i++){
			printf("num[%d]=%d\n",i,num[i]);
		}
	}
	return 0;
}
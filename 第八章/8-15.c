#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[100];
	char code[100];
}staff;


int cmp(const void* t1,const void* t2){
	return	strcmp(((staff*)t1)->code,((staff*)t2)->code);
}

void print(staff sta[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("name=%s code=%s\n",sta[i].name,sta[i].code);
	}	
}

char* binary_sort(staff sta[],int n,char* str){
	int bottom=0,top=n-1;
	int mid,flag=0;
	while(bottom<=top){
		mid=(top+bottom)/2;
		if(strcmp(sta[mid].code,str)>0){
			top=mid-1;
		}
		else if(strcmp(sta[mid].code,str)<0){
			bottom=mid+1;
		}
		else{
			return sta[mid].name;
		}
	}
	return "No This Guy";
}

int main(){
	int n;
	while(~scanf("%d",&n)){
		int i;
		char no[100];
		staff sta[100];
		for(i=0;i<n;i++){
			scanf("%s%s",sta[i].name,sta[i].code);
		}
		qsort(sta,n,sizeof(staff),cmp);
		print(sta,n);
		printf("输入要查找的工号:");
		scanf("%s",no);
		printf("%s\n",binary_sort(sta,n,no));
	}
	return 0;
}

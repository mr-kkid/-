#include<stdio.h>
#include<string.h>

char* team_1="ABC";
char* team_2="XYZ";
int vis[3];
int w[3][3]; 
int mat[3];

int match(int cur,int len){
	int j;
	for(j=0;j<len;j++){
		if(vis[j]==-1&&w[cur][j]){
			vis[j]=1;
			if(mat[j]==-1||match(mat[j],len)){
				mat[j]=cur;
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int len=strlen(team_1),i;
	memset(w,1,sizeof(w));
	memset(mat,-1,sizeof(mat));
	w[0][0]=w[2][0]=w[2][2]=0;
	for(i=0;i<len;i++){
		memset(vis,-1,sizeof(vis));
		match(i,len);
	}
	for(i=0;i<3;i++){
		printf("%c VS %c\n",team_1[mat[i]],team_2[i]);
	}
	return 0;
}
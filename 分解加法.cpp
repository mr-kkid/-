#include<bits/stdc++.h>
using namespace std;
int ans[11];

void dfs(int n,int cur){
    if(n==0){
        int flag=0;
        for(int i=1;i<cur;i++){
            for(int j=1;j<=ans[i];j++){
                if(flag==0){
                    printf("%d",i);
                    flag=1;
                }
                else{
                    printf("+%d",i);
                }
            }
        }
        printf("\n");
        return ;
    }
    if(cur>n){
        return ;
    }
    for(int i=0;i<=n/cur;i++){
        ans[cur]=i;
        if(n-cur*ans[cur]>=0){
            dfs(n-cur*ans[cur],cur+1);
        }
    }
}

int main(){
    freopen("text_1.txt","w",stdout);
    for(int i=1;i<=10;i++){
        memset(ans,0,sizeof(ans));
        dfs(i,1);
    }
    return 0;
}

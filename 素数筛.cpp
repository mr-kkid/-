#include<bits/stdc++.h>
using namespace std;
int prime[1000000],cnt=0;
int vis[1000000+5];

int main(){
    memset(vis,0,sizeof(vis));
    for(int i=2;i<=1000000;i++){
        if(vis[i]==0){
            prime[cnt++]=i;
            int temp=i;
            while(temp<=1e6){
                vis[temp]=1;
                temp+=i;
            }
        }
    }
    for(int i=0;i<100;i++){
        printf("%d ",prime[i]);
    }
    return 0;
}

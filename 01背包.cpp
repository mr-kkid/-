#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(~scanf("%d",&n)&&n!=0){
        int val[1005];
        int dp[1005];
        int sum;
        for(int i=1;i<=n;i++){
            scanf("%d",&val[i]);
        }scanf("%d",&sum);
        if(sum<5){
            printf("%d\n",sum);continue;
        }
        memset(dp,0,sizeof(dp));
        sort(val+1,val+1+n);
        int ans=5-val[n];
        int m=sum-5;
        for(int i=1;i<n;i++){
            for(int j=m;j>=val[i];j--){
                if(dp[j-val[i]]+val[i]>dp[j]){
                    dp[j]=dp[j-val[i]]+val[i];
                }
            }
        }//printf("dp[m]=%d\n",dp[m]);
        printf("%d\n",ans+m-dp[m]);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void quick_sort(int num[],int l,int r){
    if(l>=r){
        return ;
    }
    int cur=num[l];
    int left=l,right=r;
    while(l<r){
        while(l<r&&num[r]>=cur){
            r--;
        }
        if(l<r){
            num[l++]=num[r];
        }
        while(l<r&&num[l]<=cur){
            l++;
        }
        if(l<r){
            num[r--]=num[l];
        }
    }
    num[l]=cur;
    quick_sort(num,left,l-1);
    quick_sort(num,l+1,right);
}

int main(){
    int cas=1;
    while(cas++<5){
        srand(cas);
        int num[20];
        for(int i=0;i<20;i++){
            num[i]=rand()%1000;
        }
        quick_sort(num,0,19);
        for(int i=0;i<20;i++){
            printf("%d ",num[i]);
        }
        printf("\n");
    }
    return 0;
}

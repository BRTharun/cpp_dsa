#include <vector>
#include <iostream>
using namespace std;


int knapsack(int wt[],int prices[],int N,int W){
    if(N==0 or W==0){
        return 0;
    }
    int inc=0,exe=0;
    if(wt[N-1]<=W){
        inc=prices[N-1]+knapsack(wt,prices,N-1,W-wt[N-1]);
    }
    exe=knapsack(wt,prices,N-1,W);
    return max(inc,exe);
}

int knapsack_bu(int wt[],int prices[],int N,int W){
    vector<vector<int>> dp(N+1,vector<int>(W+1,0));
    for(int n=1;n<=N;n++){
        for(int w=1;w<=W;w++){
            int inc=0,exe=0;
            if(wt[n-1]<=w){
                inc=prices[n-1]+dp[n-1][w-wt[n-1]];
            }
            exe=dp[n-1][w];
            dp[n][w]=max(inc,exe);
        }
    }
    return dp[N][W];
}

int main(){
    int wt[]={2,7,3,4};
    int prices[]={5,20,20,10};
    int N=4;
    int W=11;
    cout<<knapsack(wt,prices,N,W)<<endl;
    cout<<knapsack_bu(wt,prices,N,W)<<endl; 
}
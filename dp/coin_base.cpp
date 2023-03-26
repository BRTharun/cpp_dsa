#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    vector<int> dp(amount + 1, amount + 1);
    dp[0]=0;
    for(int i=1;i<=amount+1;i++){
        for(int j=0;j<n;j++){
            if(dp[j]<=i){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    return (dp[amount]>amount)?-1:dp[amount];
}

int main() {
    vector<int> coins = {5, 7, 10};
    int amount = 6;
    int result = coinChange(coins, amount);
    cout << result << endl;
    return 0;
}
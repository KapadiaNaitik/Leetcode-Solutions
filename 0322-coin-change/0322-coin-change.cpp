class Solution {
public:
    int recursion(int index, vector<int> &coins, int amount,vector<vector<int>>& dp){
        if(index==0){
            if(amount % (coins[0])==0) return amount/coins[0];
            return 1e9;
        }
        if(dp[index][amount]!=-1) return dp[index][amount];
        int noTake=0+recursion(index-1,coins,amount,dp);
        int take=1e9;
        if(coins[index]<=amount) take=1+recursion(index,coins,amount-coins[index],dp);



        return dp[index][amount]=min(take,noTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));

        int ans= recursion(coins.size()-1,coins,amount,dp);
        return ans<1e9?ans:-1;

        
    }
};
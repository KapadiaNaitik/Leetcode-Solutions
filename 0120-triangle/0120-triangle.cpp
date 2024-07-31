class Solution {
public:
    int recursiveCall(vector<vector<int>> &triangle, int m,int last,vector<vector<int>> &dp){
        if(m==0){
            return dp[0][0]= triangle[0][0];
        }
        if(m<0) return 10000;
        if(dp[m][last]!=-1) return dp[m][last];
        int maxi=INT_MAX;
        for(int i=0;i<triangle[m].size();i++){
            cout<<m<<i<<endl;
            if(i==last || i==last-1||last==-1){
                maxi=min(triangle[m][i]+recursiveCall(triangle,m-1,i,dp),maxi);
            }
        }
        return dp[m][last]= maxi;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),INT_MAX));


        for(int i=0;i<triangle.size();i++){
            // int maxi=INT_MAX;
            for(int j=0;j<triangle[i].size();j++){
                if(i==0){
                    dp[i][j]=triangle[i][j];
                    continue;
                }
                if(j==0){

                dp[i][j]=min(triangle[i][j]+dp[i-1][j],dp[i][j]);
                }
                else if(j==triangle[i].size()-1){

                dp[i][j]=min(triangle[i][j]+dp[i-1][j-1],dp[i][j]);
                }
                else{
                    dp[i][j]=min(triangle[i][j]+dp[i-1][j],triangle[i][j]+dp[i-1][j-1]);

                }



            }
        }
        
        int ans=INT_MAX;
        for(int i=triangle.size()-1;i>=0;i--){
            ans=min(ans,dp[triangle.size()-1][i]);

        }



        // int ans=recursiveCall(triangle,triangle.size()-1,-1,dp);
        // return dp[triangle.size()-1][triangle.size()-1];
        return ans;

        
    }
};
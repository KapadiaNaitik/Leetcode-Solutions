class Solution {
public:
    int robbing(vector<int> &nums){
         vector<long> dp(nums.size(),0);
     
        dp[0]=nums[0];
        dp[1]=nums[1];
        long FinalAnswer=max(dp[0],dp[1]);
        for(int i=2;i<nums.size();i++){
            int temp=2;
            long maxSum=INT_MIN;
            while(i-temp>=0){
                long ans=nums[i]+dp[i-temp];
                maxSum=max(maxSum,ans);
                temp++;
            }
            cout<<i<<maxSum<<endl;
            dp[i]=maxSum;
            cout<<dp[i]<<endl;
        
            FinalAnswer=max(maxSum,FinalAnswer);
        }
        return FinalAnswer;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> temp1;
        vector<int> temp2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
       return max(robbing(temp1),robbing(temp2));
        
    }
};
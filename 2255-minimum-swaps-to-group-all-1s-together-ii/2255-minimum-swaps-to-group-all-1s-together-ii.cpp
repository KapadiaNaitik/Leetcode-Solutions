class Solution {
public:
   
   
    int minSwaps(vector<int>& nums) {
        int ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) ones++;
        }
        if(ones==0) return 0;
        int ans=INT_MAX;

        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){

            for(int j=0;j<ones;j++){
                if(nums[(j+i)%nums.size()]==0) counter++;
            }
            }
            else{
                if(nums[(i-1)]==0) counter--;
                if(nums[(i-1+ones)%nums.size()]==0) counter++;

            }
            ans=min(ans,counter);
            }
        
        return ans;
        
    }
};
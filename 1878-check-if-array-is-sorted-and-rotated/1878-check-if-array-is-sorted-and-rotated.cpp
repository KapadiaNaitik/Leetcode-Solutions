class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted= nums;
        sort(nums.begin(),nums.end());
        if(sorted==nums){
            return true;
        }
        int len=nums.size();
        while(len>0){
            bool ans=true;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=(sorted[(i+len)%nums.size()]))
                    ans=false;

            }
            if(ans){
                return true;
            }
            len--;
        }
        return false;
        
    }
};
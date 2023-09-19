class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        vector<int> leftsum;
        vector<int> rightsum;
        leftsum.push_back(0);
        rightsum.push_back(0);

        for(int i=1;i<nums.size();i++){
            leftsum.push_back(leftsum[i-1]+nums[i-1]);
            
        }
        // for(int i=0;i<nums.size();i++){
        //     cout<<leftsum[i]<<endl;
        // }

        reverse(nums.begin(),nums.end());
         for(int i=1;i<nums.size();i++){
            rightsum.push_back(rightsum[i-1]+nums[i-1]);
            
        }
        reverse(rightsum.begin(),rightsum.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<rightsum[i]<<endl;
        // }
        for(int i=0;i<nums.size();i++){
            nums[i]=leftsum[i]-rightsum[i];
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }
        return nums;
        
    }
};
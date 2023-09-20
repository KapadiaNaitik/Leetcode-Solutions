class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int highest=0;
        int lowest=0;
        int rem=0;
        for(int i=0;i<nums.size();i++){
            highest+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                rem=nums[i]%10;
                lowest+=rem;
                nums[i]=nums[i]/10;
            }
        }
        highest=highest-lowest;
        return highest;
        
    }
};
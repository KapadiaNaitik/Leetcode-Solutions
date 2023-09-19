class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       
        vector<vector<int>> ans;
        while(nums.size()>0){
             set<int> here;
        vector<int> temp;

        
        
        for(int i=0;i<nums.size();i++){
            int length=here.size();
            here.insert(nums[i]);
            if(here.size()!=length){
             
                temp.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                i--;

            }


        }
        ans.push_back(temp);
        }
        return ans;
        
    }
};
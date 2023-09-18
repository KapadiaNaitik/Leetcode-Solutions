class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++){
            if(groupSizes[i]>0){
            int count=groupSizes[i];
            vector<int> temp;
            int value=count;
            temp.push_back(i);
            count--;
            groupSizes[i]=-1;
            for(int j=i+1;j<groupSizes.size();j++){
                if(count>0){
                    if(groupSizes[j]==value){
                        count--;
                        temp.push_back(j);
                                    groupSizes[j]=-1;





                    }
                }
                else{
                    break;
                }
                   
                }
            
            ans.push_back(temp);
            }

        }
        return ans;
        
    }

};
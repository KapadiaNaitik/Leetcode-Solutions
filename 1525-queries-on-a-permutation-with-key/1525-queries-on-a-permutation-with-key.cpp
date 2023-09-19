class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        vector <int> duplicate;
        for(int i=1;i<=m;i++){
            duplicate.push_back(i);
        }
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<duplicate.size();j++){
                if(queries[i]==duplicate[j]){
                    ans.push_back(j);
                    for(int k=j;k>0;k--){
                        int temp=duplicate[k-1];
                        duplicate[k-1]=duplicate[k];
                        duplicate[k]=temp;
                        


                    }
                }
            }
        }
        return ans;
        
    }
};
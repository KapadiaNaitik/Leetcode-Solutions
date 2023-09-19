class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        vector<int> pos;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
                
            }
            ans.push_back(count);
            pos.push_back(i);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i;j<ans.size();j++){
                if(ans[i]>ans[j]){
                    int temp=ans[i];
                    ans[i]=ans[j];
                    ans[j]=temp;
                    temp=pos[i];
                    pos[i]=pos[j];
                    pos[j]=temp;
                }
                else if(ans[i]==ans[j]&&pos[i]>pos[j]){
                    int temp=ans[i];
                    ans[i]=ans[j];
                    ans[j]=temp;
                    temp=pos[i];
                    pos[i]=pos[j];
                    pos[j]=temp;
                }

            }
        }
     
        
       vector<int> why;
       for(int i=0;i<k;i++){
           why.push_back(pos[i]);
       }
        return why;
    }
};
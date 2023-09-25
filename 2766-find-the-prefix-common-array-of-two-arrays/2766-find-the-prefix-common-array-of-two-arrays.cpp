class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        for(int i=0;i<A.size();i++){
            int c=0;
            for(int j=0;j<=i;j++){
                if(count(A.begin(),A.begin()+i+1,A[j])==count(B.begin(),B.begin()+i+1,A[j]) && count(B.begin(),B.begin()+i+1,A[j])!=0){
                    // cout<<count(A.begin(),A.begin()+i,A[j])<<endl;
                    // cout<<count(B.begin(),B.begin()+i,A[j])<<endl;
                    // cout<<i<<A[j]<<endl;
                    c++;
                }

            }
            
            cout<<c<<endl;
            ans.push_back(c);
    
        }
        return ans;
    }
};
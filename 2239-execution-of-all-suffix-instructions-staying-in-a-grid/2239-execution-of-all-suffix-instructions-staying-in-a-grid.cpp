class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {

        vector<int> ans;
        vector<int> dup=startPos;

        for(int i=0;i<s.length();i++){
            int count=0;
            startPos=dup;
            for(int j=i;j<s.length();j++){
                if(s[j]=='R'){
                    startPos[1]++;
                    
                }
                else if(s[j]=='L'){
                    startPos[1]--;
                }
                else if(s[j]=='D'){
                    startPos[0]++;
                }
                else{
                    startPos[0]--;
                }
                if(startPos[1]<n && startPos[0]<n && startPos[0]>=0 && startPos[1]>=0 ){
                        count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
        }       
        return ans;

    }
};
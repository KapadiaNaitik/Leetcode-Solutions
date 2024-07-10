class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(int i=0;i<logs.size();i++){
            cout<<logs[i]<<endl;
            if(logs[i]=="../" ) count>0?count--:count;
            else if(logs[i]=="./") continue;
            else count++;
            cout<<count<<endl;
        }
        return count;
    }
};
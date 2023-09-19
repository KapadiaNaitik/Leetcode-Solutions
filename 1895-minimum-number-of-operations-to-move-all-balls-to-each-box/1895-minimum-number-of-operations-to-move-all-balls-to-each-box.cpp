class Solution {
public:
    vector<int> minOperations(string boxes) {

        vector <int> ans;
        int cost=0;
        for(int i=0;i<boxes.length();i++){
             cost=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1'){
                    if(j>i){
                    cost=cost+j-i;

                    }
                    else{
                        cost=cost+i-j;
                    }
                }
            }
            ans.push_back(cost);
        }
        return ans;
        
    }
};
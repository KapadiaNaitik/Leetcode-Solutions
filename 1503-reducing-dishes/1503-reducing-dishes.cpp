class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int max=0;
        sort(satisfaction.begin(),satisfaction.end());
        while(satisfaction.size()>0){
            int count=0;
            for(int i=0;i<satisfaction.size();i++){
                count+=(i+1)*satisfaction[i];

            }
            if(count>max){
                max=count;
            }
            satisfaction.erase(satisfaction.begin()+0);
        }
        return max;
        
    }
};
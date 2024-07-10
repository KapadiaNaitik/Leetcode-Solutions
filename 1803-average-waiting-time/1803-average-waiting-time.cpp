class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int currentEnd=0;
        currentEnd+=customers[0][1]+customers[0][0];
        ans+=currentEnd-customers[0][0];

        for(int i=1;i<customers.size();i++){


            if(currentEnd<customers[i][0]) currentEnd=customers[i][0];

            currentEnd+=customers[i][1];

            ans+=currentEnd-customers[i][0];

        
            cout<<ans;
            cout<<currentEnd<<endl;
        }
        return ans/customers.size();
    }
};
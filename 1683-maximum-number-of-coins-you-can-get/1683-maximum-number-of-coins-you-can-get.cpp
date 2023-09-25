class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.rbegin(),piles.rend());
        
        int sum=0;
        int len=piles.size()/3;
        int i=1;
        
        while(len>0 && i<piles.size()){
             len--;
            cout<<sum<<len<<endl;
             sum+=piles[i];
             i=i+2;

        }
     
        return sum;
        
    }
};
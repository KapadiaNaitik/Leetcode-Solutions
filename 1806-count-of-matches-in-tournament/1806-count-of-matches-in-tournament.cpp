class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1){
            int rem=n/2;
            sum=sum+rem;
            n=n-rem;

        }
        return sum;
    }
};
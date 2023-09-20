class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i=i+2){
            for(int j=0;j<n-i;j++){
                int count=i;
                sum=sum+arr[j];
                while(count>0){
                    sum=sum+arr[j+count];
                    count--;
                }

            }
        }
        return sum;

     

    }
};
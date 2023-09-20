class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int dup=num;
        int rem=0;
        while(num>0){
            rem=num%10;
            if(dup%rem==0){
                count++;
            }
            num=num/10;
        }
        return count;
        
    }
};
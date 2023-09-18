class Solution {
public:
    int minPartitions(string n) {
        int highest=0;
        for(int i=n.length()-1;i>=0;i--){
            int num=n[i]-'0';
            if(num>highest){
                highest=num;
            }
        }
        return highest;
    }
};
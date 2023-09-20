class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int front =0;
        int back= mat[0].size()-1;
        for(int i=0;i<mat.size();i++){
            if(front!=back){
                sum+=mat[i][front];
                front++;
                sum+=mat[i][back];
                back--;
                

            }
            else{
                 sum+=mat[i][front];
                 front++;
                 back--;
            }
        }
        return sum;

        
    }
};
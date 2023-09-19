class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> marks;
        vector<vector<int>> ans;
        for(int i=0;i<score.size();i++){
            marks.push_back(score[i][k]);
            
        }
        sort(marks.rbegin(),marks.rend());
        for(int i=0;i<marks.size();i++){
            for(int j=0;j<score.size();j++){
                if(marks[i]==score[j][k]){
                    ans.push_back(score[j]);
                }

            }
        }
        return ans;
    }
};
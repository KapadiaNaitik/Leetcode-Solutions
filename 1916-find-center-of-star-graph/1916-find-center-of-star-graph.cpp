class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        for(int i=0;i<edges.size()-1;i++){
            if(edges[i][1]==edges[i+1][0]){
                return edges[i][1];
            }
            if(edges[i][1]==edges[i+1][1]){
                return edges[i][1];
            }
        }
        return 0;
        
    }
};
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> distance(n,vector<int>(n,10001));
        for(int i=0;i<n;i++){
            distance[i][i]=0;
        }
        for(int i=0;i<edges.size();i++){
            distance[edges[i][0]][edges[i][1]]=edges[i][2];
            distance[edges[i][1]][edges[i][0]]=edges[i][2];

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    distance[j][k]=min(distance[j][k],distance[i][j]+distance[i][k]);
                }
            }
        }
        int ans=-1;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(i!=j && distance[i][j]<=distanceThreshold) count++;
            }
            if(count<=mini){
                mini=count;
                ans=i;
            }
        }
        return ans;
    }
};
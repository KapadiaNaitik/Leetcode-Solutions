class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        int distance[26][26];
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                distance[i][j]=10000001;
            }
        }
        for(int i=0;i<26;i++){
            distance[i][i]=0;
        }
        
        for(int i=0;i<original.size();i++){
            distance[original[i]-'a'][changed[i]-'a']=min(distance[original[i]-'a'][changed[i]-'a'],cost[i]);
        }

      
          for(int k = 0; k < 26; k++){
            for(int i = 0; i < 26; i++){
                for(int j = 0; j < 26; j++){
                    if(distance[i][k]!=-1 && distance[k][j]!=-1)
                    distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
                }
            }
        }
      
        long long ans=0;
        for(int i=0;i<source.length();i++){
            if(distance[source[i]-'a'][target[i]-'a']>=10000001) return -1;
            ans+=distance[source[i]-'a'][target[i]-'a'];
        }
       
        return ans;

        
    }
};
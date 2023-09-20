class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        set<char> allow;
        for(int i=0;i<allowed.length();i++){
            allow.insert(allowed[i]);
        }
        for(int j=0;j<words.size();j++){
            set<char>dup;
            for(int i=0;i<words[j].length();i++){
                dup.insert(words[j][i]);
            }
            if(includes(allow.begin(),allow.end(),dup.begin(),dup.end())){
                count++;

            }
        }
        
        return count;

    }
};
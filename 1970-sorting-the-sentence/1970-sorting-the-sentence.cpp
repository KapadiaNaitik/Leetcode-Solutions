class Solution {
public:
    string sortSentence(string s) {        
        vector<int> pos;
        vector<string> ans;
            string so="";
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                int num=int(s[i]-'0');
                pos.push_back(num);
            }
            
            else if(isalpha(s[i])){
                so=so+s[i];
            }

            else{
                ans.push_back(so);
                so="";
            }

        }
        ans.push_back(so);
      

        for(int i=0;i<pos.size();i++){
            for(int j=0;j<pos.size();j++){
                if(pos[i]<pos[j]){
                    int temp=pos[j];
                    pos[j]=pos[i];
                    pos[i]=temp;
                    string welp=ans[j];
                    ans[j]=ans[i];
                    ans[i]=welp;
                }
                
            }
        }

       

          for(int i=0;i<pos.size();i++){
            cout<<pos[i]<<endl;
            cout<<ans[i]<<endl;
        }
        string final="";
        for(int i=0;i<ans.size()-1;i++){
            final=final+ans[i]+" ";

        }
        // string we=ans[ans.size()];
        final=final+ans[ans.size()-1];
        return final;
    }
};
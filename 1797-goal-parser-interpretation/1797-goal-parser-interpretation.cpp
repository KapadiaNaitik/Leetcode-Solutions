class Solution {
public:
    string interpret(string command) {
        string answer="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='('&&command[i+1]==')'){
                answer=answer+"o";
                i=i+1;
            }
            else if(command[i]=='('&&command[i+1]=='a'){
                answer=answer+"al";
                i=i+3;
            }
            else{
                answer=answer+command[i];
            }
        }
        return answer;
        
    }
};
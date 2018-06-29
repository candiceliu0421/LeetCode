// stack練習

class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0){return true;}  
        
    
    stack<char> stack;
    stack.push(s[0]);
    
    for(int i=1;i<s.length();i++){
        if(!stack.empty()&&match(stack.top(),s[i])){
            stack.pop();
        }
        else{
            stack.push(s[i]);
        }
    }
    if(stack.empty()){return true;}
    else{return false;}
    }
    bool match(char s, char p){
        if((s=='('&&p==')')||(s=='{'&&p=='}')||(s=='['&&p==']')){return true;}
        else{return false;}
    }
};
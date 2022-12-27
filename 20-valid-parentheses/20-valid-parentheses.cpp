class Solution {
public:
    bool isValid(string s) {
        
        stack<int> stacky ; 
        for( int i = 0 ; i < s.length() ; i++){
              if( s[i] == '(' || s[i] == '{' || s[i] == '[')
              {
                 stacky.push(s[i]); 
                  continue ; 
              }
            
            if( stacky.empty())
                return false ; 
            
            char x = stacky.top();
        if (( x == '(' && s[i] == ')') ||( x == '{' && s[i] == '}') ||( x == '['  && s[i] == ']'))
             stacky.pop();
            else 
                return false ; 
        }

        if( stacky.empty())
            return true ; 
        else 
            return false ; 
    }
};
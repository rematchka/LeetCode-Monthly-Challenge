class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char>ss,tt;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]!='#')
            {
                ss.push(S[i]);
            }
            else if(S[i]=='#')
            {
                if(ss.empty()!=1)
                ss.pop();
            }
        }
        
        for(int i=0; i<T.length(); i++)
        {
            if(T[i]!='#')
            {
                tt.push(T[i]);
            }
            else if(T[i]=='#')
            {
                if(tt.empty()!=1)
                tt.pop();
            }
        }
        
        if(ss.size()!=tt.size())
        {
            return false;
        }
        else 
        {
           bool flag = true; 
           while(ss.empty()!=1)
           {
               if(ss.top()!=tt.top())
               {
                   flag = false;
                   break;
               }
               ss.pop() , tt.pop() ; 
           }
            return flag;
        }   
        
    }
};
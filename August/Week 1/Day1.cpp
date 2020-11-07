class Solution {
public:
    bool detectCapitalUse(string w) {
     bool allCapital=true, firstCaptital=true, allSmall=true;
        if(isupper(w[0])) firstCaptital=true;
        else firstCaptital=false;
        for(int i=1;i<w.size();i++)
        {
            if (isupper(w[i])) allSmall= false;
            else if (!isupper(w[i])) allCapital=false;
        }
        
        if(firstCaptital && allSmall ) return true;
        if( !firstCaptital && allSmall ) return true;
         if( firstCaptital && allCapital ) return true;
        return false;
        
        
        
    }
};
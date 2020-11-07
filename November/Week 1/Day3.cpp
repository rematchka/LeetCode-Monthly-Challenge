class Solution {
public:
    int maxPower(string s) {
        int maxi=0;
        int cnt=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]) cnt++;
            else
            {
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        return max(maxi,cnt);
    }
};
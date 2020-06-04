class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string s= strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s) == mp.end())
            {
                mp[s]= vector<string>(1,strs[i]);
            }
            else
            {
                mp[s].push_back(strs[i]);
            }
            
        }
        for (auto it = mp.begin(); it !=mp.end(); it++){
            res.push_back(it->second);
        }
        return res;
        
       
        
    }
};
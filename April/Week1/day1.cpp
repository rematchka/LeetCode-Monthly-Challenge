class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int>s;
        int num=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                s.erase (nums[i]);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        for (auto it=s.begin(); it != s.end(); ++it) 
            return *it;
        return 0;
        
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=ceil(nums.size()/2);
        map<int,int>mp;
        int number=-1, cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>=majority&& cnt<mp[nums[i]] )
            {
                 number=nums[i];
                cnt=mp[nums[i]];
            }
        }
        return number;
        
    }
};
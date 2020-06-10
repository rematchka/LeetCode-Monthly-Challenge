class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        vector<int>::iterator lower;
        lower = lower_bound (v.begin(), v.end(), x);
        int index=(lower- v.begin());
        if(index>v.size()) index--;
        return index;

    }
};
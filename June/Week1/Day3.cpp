class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        auto cmp = [](const vector<int>& lhs, const vector<int>& rhs) {
            return lhs[0] - lhs[1] < rhs[0] - rhs[1];
        };
        sort(costs.begin(), costs.end(), cmp);

        int n = costs.size();
        int total = 0;
        for (int i = 0; i < n; ++i) {
            if (i < n / 2) {
                total += costs[i][0];
            } else {
                total += costs[i][1];
            }
        }

        return total;
    }
};
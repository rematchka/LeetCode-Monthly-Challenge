class Solution {
public:
    bool checkValidString(string s) {
        
        int min_op = 0;
        int max_op = 0;
        
        for (auto c : s) {
            if (c == '(') ++min_op; else --min_op;
            if (c != ')') ++max_op; else --max_op;
            if (max_op < 0) return false;
            min_op = max(0, min_op);
        }
        
        return min_op == 0;
    }
};
class Solution {
public:
    bool isPerfectSquare(int num) {
        int half=sqrt(num);
        if(half*half==num)return true;
        return false;
        
    }
};
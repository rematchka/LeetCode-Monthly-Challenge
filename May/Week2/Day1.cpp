class Solution {
public:
     int gcd(int a, int b){
      return !b?a:gcd(b,a%b);
   }
    bool checkStraightLine(vector<vector<int>>& c) {
        bool ans =true;
      bool samex = true;
      bool samey = true;
      int a = c[1][0]-c[0][0];
      int b = c[1][1]-c[0][1];
      int cc = gcd(a,b);
      a/=cc;
      b/=cc;
      for(int i =1;i<c.size();i++){
         int x = c[i][0]-c[i-1][0];
         int y = c[i][1]-c[i-1][1];
         int z = gcd(x,y);
         x/=z;
         y/=z;
         ans =ans &&(x == a )&& (y == b );
      }
      return ans;
    }
};
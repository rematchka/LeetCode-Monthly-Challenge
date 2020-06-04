class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int mul=1;
        int n=arr.size();
        int cnt_zero=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            mul*=arr[i];
            else
                cnt_zero++;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt_zero==0)
            {
                arr[i]=mul/arr[i];
            }
            else
            {
                if(arr[i]==0 &&cnt_zero==1)
                {
                    arr[i]=mul;
                }
                else if(arr[i]==0 && cnt_zero>1)
                {
                    arr[i]=0;
                }
                else if(arr[i]!=0)
                    arr[i]=0;
            }
            
        }
        return arr;
        
    }
};
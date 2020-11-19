class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x;
        int res=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid*mid==x)
            {
                res=mid;
                break;
            }
            else if(mid*mid<x)
            {
                res=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return res;
    }
};

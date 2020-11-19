int first_occ(vector<int> nums, int target)
{
    int start=0,end=nums.size()-1;
    int res=-1; //
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target==nums[mid])
        {
            res=mid; //
            end=mid-1; //
        }
        else if(target > nums[mid])
            start=mid+1;
        else if(target < nums[mid])
            end=mid-1;
    }
    return res;
}
int last_occ(vector<int> nums, int target)
{
    int start=0,end=nums.size()-1;
    int res=-1; //
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target==nums[mid])
        {
            res=mid; //
            start=mid+1; //
        }
        else if(target > nums[mid])
            start=mid+1;
        else if(target < nums[mid])
            end=mid-1;
    }
    return res;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int first = first_occ(nums,target);
        res.push_back(first);
        int last = last_occ(nums,target);
        res.push_back(last);
        return res;
    }
};

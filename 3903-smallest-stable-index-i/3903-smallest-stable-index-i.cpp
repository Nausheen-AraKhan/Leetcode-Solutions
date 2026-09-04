class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            int ma_ele=*max_element(nums.begin(),nums.begin()+i+1);
            int mi_ele=*min_element(nums.begin()+i,nums.end());
            if((ma_ele-mi_ele)<=k)
               return i;
        }
        return -1;
    }
};
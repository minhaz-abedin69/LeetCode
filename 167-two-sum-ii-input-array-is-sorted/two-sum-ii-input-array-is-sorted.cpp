class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<high)
        {
            int curSum = nums[low]+nums[high];
            if(curSum == target)
            {
                return {low+1, high+1};
            }
            else if( curSum<target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return{};
        
    }

};
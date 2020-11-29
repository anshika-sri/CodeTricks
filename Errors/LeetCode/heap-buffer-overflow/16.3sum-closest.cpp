//https://leetcode.com/problems/3sum-closest/


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        sort(begin(nums), end(nums));
        int diff = INT_MAX;
        for(int i = 0; i<size; i++) {
            int oneptr =  i+1;
            int twoptr = size-1;
            
            //WHERE IS THE CHECK FOR ONEPTR & TWOPTR TO STOP
            
            int sum = nums[i] + nums[oneptr] + nums[twoptr];
            
            if(abs(target - sum) < diff) {
                diff = target - sum;
            }
            
            if(sum < target) {
                ++oneptr;
            }
            else --twoptr;
        }
        
        return target - diff;
        
        
        
    }
};

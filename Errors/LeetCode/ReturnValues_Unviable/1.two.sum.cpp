//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size(), diff = INT_MAX;
        int oneptr, twoptr;
        pair <int, int> ans;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size-1; i++) {
            oneptr = i; twoptr = size -1;
            
            while(oneptr < twoptr) {
            int sum = nums[oneptr] + nums[twoptr];
            
            if(abs(target - sum) < abs(diff)) {
                diff = abs(target - sum);
            }
                if(sum> target) { oneptr++; }
                else { twoptr--; }
            
            }
            
        }
        
        ans.first = oneptr;
        ans.second = twoptr;
        
        return ans;
    
};
}


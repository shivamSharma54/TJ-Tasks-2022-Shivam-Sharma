class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int ans = 0 , cnt = 0;
        for(auto it: nums){
            if(it == maxi)cnt+= 1;
            else cnt = 0;
            ans = max(ans , cnt);
        }
        return ans;
    }
};
    

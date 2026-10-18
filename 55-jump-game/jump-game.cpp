class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int maxin = 0;

        for(int i = 0; i<n; i++){
            if(i > maxin)return false;
            maxin = max(maxin , i+nums[i]);

        }

        if(maxin>=n-1)return true;
        return false;

        
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        vector<int> prefixsum(nums.size());
        int n = nums.size();

        prefixsum[0] = nums[0];

        for(int i = 1; i < n; i++){

            prefixsum[i] = prefixsum[i-1] + nums[i];
        }


        int total = prefixsum[n-1];

        for(int i = 0; i<n; i++){

            int leftsum = (i == 0) ? 0 : prefixsum[i-1];

            int indexval = nums[i];

            int rightsum = total - indexval - leftsum;

            if(rightsum == leftsum){
                return i;
            }

        }

        return -1;


        
    }
};
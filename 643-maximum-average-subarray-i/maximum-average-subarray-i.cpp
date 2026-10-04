class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {


        int maxsum = INT_MIN;
        int n  = nums.size();

        int left= 0;
        int right = k-1;

        int sum = 0;
        for(int i = 0; i<k; i++){
            sum += nums[i];

        }
        maxsum = max(maxsum , sum);

        for(int i = k; i<n; i++){

            sum-=nums[i-k];
            sum+=nums[i];
            maxsum = max(maxsum , sum);

        }

        return double (maxsum)/k;


        

    }
};
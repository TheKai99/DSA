class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int result = n+1;
        int left = 0;
        int sum = 0;

        for(int right = 0; right < n; right++){

            sum += nums[right];

            if(sum >= target){
                result = min(result , right-left+1);
            }

            while(sum >= target){


                sum-= nums[left];
                left++;

                if(sum >= target){
                result = min(result , right-left+1);
            }

            }

        }
        if(result > n){
            return 0;
        }else{
            return result;
        }


        
    }
};
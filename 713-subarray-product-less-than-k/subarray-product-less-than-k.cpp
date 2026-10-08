class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {


        int n = nums.size();
        int result = 0;

        for(int i = 0; i<n; i++){

            long temp = 1;
            for(int j = i; j<n; j++){

                temp = temp*nums[j];

                if(temp < k){
                    result++;
                }else{
                    break;
                }
            }
        }

        return result;


        


        
    }
};
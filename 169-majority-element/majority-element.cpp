class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n  = nums.size();
        sort(nums.begin() , nums.end());

        int temp = 0;
        int count = 0;

        for(int i = 0; i<n; i++){

            if(i == 0){
                temp = nums[i];
                count++;
                if(count> n/2) return temp;
            }else if(nums[i] == temp){
                count++;
                if(count> n/2) return temp;
            }else{
                temp = nums[i];
                count = 0;
                count++;
                if(count> n/2) return temp;
            }

        }
        return temp;
        
    }
};
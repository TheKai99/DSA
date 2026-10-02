class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int ,int>mp;
        int n = nums.size();
        int count = 0;
        int prefixsum = 0;

        mp[0] = 1;

        for(int i = 0; i<n; i++){

            prefixsum+=nums[i];

            int rem = prefixsum%k;

            if(rem < 0){
                rem += k;
            }

            if(mp.contains(rem)){

                count += mp[rem];

            }

            mp[rem]++;
        }
        return count;
        
    }
};
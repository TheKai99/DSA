class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int , int> mp;
        int n = nums.size();
        int prefixsum = 0;
        int count = 0;
        mp[0] = 1;

        for(int i = 0; i<n; i++){

            prefixsum+=nums[i];

            int check = prefixsum - k;

            if(mp.contains(check)){
                count += mp.at(check);
            }

            mp[prefixsum]++;

        }
        return count;

        
    }
};
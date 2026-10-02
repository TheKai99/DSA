class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int , int> mp;
        int maxlen = 0;
        int prefixsum = 0;

        mp[0] = -1;


        for(int i = 0; i<n; i++){

            if(nums[i] == 1){
                prefixsum+=1;
            }else{
                prefixsum-=1;
            }

            if(mp.contains(prefixsum)){
                maxlen = max(maxlen , i-mp[prefixsum]);
            }else{
                mp[prefixsum] = i;
            }


        }

        return maxlen;
        
    }
};
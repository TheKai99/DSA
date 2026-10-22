class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;


        for(int i = 0; i< strs.size(); i++){

            string temp = strs[i];
            sort(temp.begin(),temp.end());

            if(mp.contains(temp)){
                mp[temp].push_back(strs[i]);
            }else{
                mp[temp] = {strs[i]};
            }
        }

        for(auto& p: mp){
            result.push_back(p.second);
        }

        return result;

        
    }
};
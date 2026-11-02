class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()){
                int index = mp[comp];
                return {min(i,index), max(i, index)};
            }
            mp[nums[i]] = i;
        }
    }
};

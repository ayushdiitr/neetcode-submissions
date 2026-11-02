class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> res;

        for (auto it : mp) {
            res.push_back(it.first);
        }
        sort(res.begin(), res.end(), [&](int a, int b){
            return mp[a]>mp[b];
        });
        vector<int> ans;

        for(int i = 0; i<k; i++){
            ans.push_back(res[i]);
        }

        return ans;
    }
};

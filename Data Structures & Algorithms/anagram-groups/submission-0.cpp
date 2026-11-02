class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string st: strs){
        vector<int> v(26,0);
            for(char c: st){
                v[c-'a']++;
            }

            string key = "";
            for(int i = 0; i<26; i++){
                key += to_string(v[i]) + '#';
            }

            mp[key].push_back(st);
        }

        vector<vector<string>> res;
        for(auto it: mp){
            res.push_back(it.second);
        }

        return res;
    }
};

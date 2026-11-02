class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> mp;

        for(int i = 0; i<s.length(); i++){
            mp[s[i]] += 1;
        }

        for(int i = 0; i<t.length(); i++){
            mp[t[i]] -= 1;
        }

        for(auto i = mp.begin(); i!=mp.end(); ++i){
            if(i->second != 0) return false;
        }
        return true;
    }
};

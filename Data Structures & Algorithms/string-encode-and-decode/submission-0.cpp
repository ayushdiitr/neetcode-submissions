class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto it: strs){
            int cc = it.length();
            res += to_string(cc) + '#' + it;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i<s.length()){
            int delim = s.find('#',i);
            int leng = stoi(s.substr(i, (delim - i)));
            res.push_back(s.substr(delim+1, leng));
            i = delim + leng +1;
        }
        return res;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mx, int target) {
        int n = mx.size();
        int m = mx[0].size();

        int r = 0, c = m-1;
        while(r<n && c>=0){
        if(mx[r][c] == target) return true;
        if(mx[r][c] < target) r++;
        else c--;
        }
        return false;
    }
};

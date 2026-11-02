class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mx, int target) {
        int n = mx.size();
        int m = mx[0].size();

        int l = 0;
        int r = n*m-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int row = mid/m;
            int col = mid%m;

            int val = mx[row][col];
            if(val == target) {
                return true;
            }
            else if(val<target) {
                l = mid + 1;
            }else {
                r = mid-1;
            }
        }
        return false;
    }
};

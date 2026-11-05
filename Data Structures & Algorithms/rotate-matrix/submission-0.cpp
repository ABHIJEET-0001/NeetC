class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix.size() - 1;
        while(l < r ){
            for(int i = 0; i < r - 1;i++){
                int top = l;
                int bottom = r;
                int topLeft = matrix[top][l + i];
                matrix[top][l + i] = matrix[bottom - i][l];
                matrix[bottom][r - i][l] = matrix[bottom][r - i];
                matrix[bottom][r - 1] = matrix[top + i][r];
                matrix[top + i][r] = topleft;
            }
            r--;
            l++;
        }
    }
};

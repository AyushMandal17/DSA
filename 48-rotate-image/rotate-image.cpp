class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(long long i = 0; i<matrix.size(); i++){
            for(long long j= i+1; j<=matrix.size()-1; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

    
    for(int i = 0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};
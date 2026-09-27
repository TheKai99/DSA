class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        
        vector<int>output;
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0 , right = n-1;
        int top = 0 , bottom = m-1;

        while(left <= right && top <= bottom){

            // for right path
            for(int i = left; i <= right; i++){
                output.push_back(matrix[top][i]);
            }
            top++;

            // for bottom path
            for(int i = top; i <= bottom; i++){
                output.push_back(matrix[i][right]);
            }
            right--;

            // for left path
            if(bottom >= top){
                for(int i = right; i>=left; i--){
                    output.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // for top path
            if(right >= left){
                for(int i = bottom; i>=top; i--){
                    output.push_back(matrix[i][left]);
                }
                left++;
            }            
        }

        return output;



        
    }
};
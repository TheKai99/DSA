class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxarea = INT_MIN;
        int n = height.size();

        int left = 0;
        int right = n-1;

        while (left < right){

            int breadth = min(height[left] , height[right]);
            int width = right-left;

            int capacity = breadth * width;

            maxarea = max(maxarea , capacity);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }

                
        }
        return maxarea;
        
    }
};
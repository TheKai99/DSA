class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int check = m+n-1;
        int right = n-1;
        int left = m-1;

        

        while(right > -1 && left > -1){

            if(nums2[right] > nums1[left]){
                nums1[check] = nums2[right];
                right--;
                check--;
            }
            else{
                nums1[check] = nums1[left];
                left--;
                check--;
            }
        }

        while(right > -1){
            nums1[check] = nums2[right];
            check--;
            right--;
        }
        
    }
};
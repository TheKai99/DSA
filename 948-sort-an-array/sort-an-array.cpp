class Solution {
    void merge(vector<int>& arr , int low , int mid , int high){
        vector<int> result;
        int i = low;
        int j = mid+1;

        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                result.push_back(arr[i]);
                i++;
            }
            else{
                result.push_back(arr[j]);
                j++;
            }
        }

        while(i<=mid){
            result.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            result.push_back(arr[j]);
            j++;
        }

        for (int k = 0; k < result.size(); k++) {   // copy back
            arr[low + k] = result[k];
        }


    }

    void merge_sort(vector<int>& arr , int low , int high){

        if(low>=high) return;
        int mid = (low+high)/2;
        merge_sort(arr , low , mid);
        merge_sort(arr , mid+1 , high);
        merge(arr , low , mid , high);
    }
public:
    vector<int> sortArray(vector<int>& nums) {

        int low = 0;
        int high = nums.size()-1;
        merge_sort(nums , low , high);
        return nums;     
    }
};
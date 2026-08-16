class Solution {
public:
    int lowerbound(vector<int>& arr, int n, int x) {
        int low = 0;           
        int high = n - 1;
        int ans = n;          
     
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] >= x) {
                ans = mid;        
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        return ans;
    } 
    int upperbound(vector<int>& arr, int n, int x) {
        int low = 0;           
        int high = n - 1;
        int ans = n;          
     
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] > x) {
                ans = mid;        
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        return ans;
    } 

     vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerbound(nums, nums.size() , target);
        int ub = upperbound(nums, nums.size(), target);
        if(lb == nums.size() || nums[lb] !=target){
            return {-1, -1};
        }
        else{
            return {lb , ub -1};
        }
    }
    };

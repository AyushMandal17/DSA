class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int peak;
        if(n==1){
            peak = 0;
        }
        else if(nums[0]>nums[1]){
            peak =0;
        }
        else if(nums[n-1]>nums[n-2]){
            peak = n-1;
        }
        else{
            int low =1 , high = n-2;
            for(int i = 1; i<n-1; i++){
                int mid = (low + high)/2;
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    peak = mid;
                }
                else if (nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                    low = mid+1;
                }
                else{
                    high = mid -1;
                }

            }
        }
        return peak;
    }
};
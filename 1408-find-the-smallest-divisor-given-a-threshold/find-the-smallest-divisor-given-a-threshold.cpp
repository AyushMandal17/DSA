class Solution {
public:

    int arraymaxer(vector<int>& arr) {
        int maxi = INT_MIN;

        for(int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }

        return maxi;
    }

    long long func(vector<int>& arr1, int h, int threshold) {
        long long t1 = 0;

        for(int i = 0; i < arr1.size(); i++) {
            t1 += ceil((double)arr1[i] / h);

            if(t1 > threshold)
                return t1;
        }

        return t1;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = arraymaxer(nums);
        int ans = 0;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long solver = func(nums, mid, threshold);

            if(solver <= threshold) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
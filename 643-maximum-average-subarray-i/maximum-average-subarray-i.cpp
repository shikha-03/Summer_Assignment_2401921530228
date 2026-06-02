class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long maxSum=LLONG_MIN;
        long long windowSum = 0;

        for( int i = 0; i< nums.size(); i++) {
            windowSum+=nums[i];
            if( i>= k-1){
                //max
                maxSum = max(maxSum, windowSum);
                //remove
                windowSum-=nums[i-k+1];
            }
        }
        return (double) maxSum/k;
    }
};
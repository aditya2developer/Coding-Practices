class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        // int product = 1;
        // for(int i = 0;i<nums.size();i++){
        //     product*=nums[i];
        // }
        // return product;
    }
};
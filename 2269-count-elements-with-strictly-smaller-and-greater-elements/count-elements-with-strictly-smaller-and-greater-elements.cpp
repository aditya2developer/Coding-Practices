class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());

        int count = 0;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]<mx&&nums[i]>mn){
                count++;
            }
        }
        return count;
    }
};
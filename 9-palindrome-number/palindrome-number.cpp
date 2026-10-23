class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int original = x;
        long long sum = 0;
        while(original>0){

            sum =sum*10+ original%10;
            original/=10;
        }
        return sum==x;
    }
};
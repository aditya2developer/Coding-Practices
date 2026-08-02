class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while(x!=0){
            long long digit = x%10;
            x/=10;
            if(ans < INT_MIN/10 || ans > INT_MAX/10){
                return 0;
            }
            ans = ans*10+digit;
        }
        return ans;
    }
};
class Solution {
    public:
        long long removeZeros(long long n) {
            long long result(0), multiplier(1);
            int rest;
            
            while(n > 0) {
                rest = n % 10;
                if(rest != 0) {
                    result += (rest * multiplier);
                    multiplier *= 10;
                }
                n /= 10;
            }
    
            return result;
        }
    };
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
            for(int i=2;i<=2*n ;i=i+2){
                sumEven+=i;
            }
            for(int i=1;i<=2*n-1;i++){
                if(i%2!=0){
                    sumOdd+=i;
                }
            }

       int ans= gcd(sumOdd,sumEven);
       return ans;
    }
};
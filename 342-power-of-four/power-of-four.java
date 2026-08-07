class Solution {
    public boolean isPowerOfFour(int n) {
    //    int zero = 0;
    //     int one = 0;

    //     while(n!=0){
    //         if((n&1) == 0) zero++;
    //         else one++;

    //         n >>>= 1;
            
    
    //  }
    //  return (one ==1 ) && (zero%2 == 0);

    if(n <= 0)return false;
    return ((n & (n-1)) == 0) && n%3 == 1;
    }
    
}
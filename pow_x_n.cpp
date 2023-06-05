class Solution {
public:
    double myPow(double x,long int n) {
    if (n == 0)
      return 1;
    if(n==1)return x;
    if(x==1)return x;
    if (n < 0)
      return 1 / myPow(x, -n);
    if (n & 1)
      return x * myPow(x, n - 1);
    return myPow(x * x, n / 2);
    }
};
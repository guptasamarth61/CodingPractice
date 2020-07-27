class Solution {
public:
    int countPrimes(int n) {
        int ans = 1;
        if(n<=2) return 0;
        if(n==3) return 1;
        for(int i=3; i<n; i+=2){
            int flag = 0;
            for(int j=2; j*j<=i; j++){
                if((i%j)==0) {
                    flag = 1;
                    break;
                }
            }
            if(flag==0) ans++;
        }
        return ans;
    }
};

//the key thing here was to iterate till square root of N
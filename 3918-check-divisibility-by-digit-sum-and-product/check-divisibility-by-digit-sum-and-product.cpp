class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0; int rem=0;
        int product=1;
        for(int i=n;i>0;i=i/10){
            rem=i%10;
            sum=sum+rem;
            product=product*rem;

        }
        if(n%(sum+product)==0)
            return true;
            else 
            return false;
        

    }
};
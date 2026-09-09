class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;int rem=0;int product=1;int difference=0;
        for(int i=n;i>0;i=i/10){
 rem=i%10;
 sum=sum+rem;
 product=product*rem;
        }
difference=product-sum;
        
        return difference;

        
    }
};
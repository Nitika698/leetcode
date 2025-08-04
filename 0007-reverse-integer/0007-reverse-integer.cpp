class Solution {
public:
    int reverse(int x) {
       long long num=0;
        while(x!=0){
            int lastdigit = x%10;
            num=num*10+lastdigit;
            x=x/10;
        }
        if(num<INT_MIN||num>INT_MAX){
            return 0;
        }


        return num;
    }
};
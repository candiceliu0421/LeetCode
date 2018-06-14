//用 c++ modulo 負值會回傳負值，為方便用c++  >< 

class Solution {
public:
    int reverse(int x) {
        int reversenum=0;
        while(x!=0){
            int num=x%10;
            int tempreverse=num+reversenum*10;
            if((tempreverse-num)/10!=reversenum){
                return 0;
            }
            reversenum=tempreverse;
            x=x/10;
        }
        return reversenum;
    }
};
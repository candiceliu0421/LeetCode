class Solution {
public:
    bool isPalindrome(int x) {
        //x<0、x!=0且尾數0 is not a palindrome
        if(x<0||(x%10==0 && x!=0)){
            return false;
        }
        int revertnum=0;
        while(x>revertnum){
            revertnum=revertnum*10+x%10;
            x=x/10;
        }
        // if(x==revertnum||x==revertnum/10){
        //         return true;
        // }
        //奇數數字的數藉由 "/10" 印證是否符合
        return x==revertnum||x==revertnum/10;
    }
};
class Solution {
public:
    int romanToInt(string s) {
    	//使用map來儲存羅馬符號跟數字之間的對應關係
    	//兩兩比較作加減再加上最後一個
        map<char, int> roman;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            int current=roman[s[i]];
            int next=roman[s[i+1]];
            if(current>=next){
                sum=sum+current;
            }
            else{
                sum=sum-current;
            }
        }
        return sum+roman[s[s.length() - 1]];
    }
};
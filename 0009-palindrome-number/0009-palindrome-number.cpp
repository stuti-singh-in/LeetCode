class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
        int number = x;
        long long reverse = 0;
        
        while(number > 0)
        {
            reverse = reverse * 10 + number%10;
            number = number/10;
        }
    
        number = x;
        if(reverse == number){
            return true;
        }
        else{
            return false;
        }
    }
};
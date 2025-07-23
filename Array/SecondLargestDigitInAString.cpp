// #1796

// Works for 293/301 cases
class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int max2 = -1;
        int num = 0;
        
        for(char c : s){
            if(isdigit(c)){
                num = c - '0';
                if(num > max) max = num;
                if(num > max2 && num != max) max2 = num;
            }
        }
        return max2;
    }
};

// Better solution
class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int max2 = -1;
        int num = 0;
        
        for(char c : s){
            if(isdigit(c)){
                num = c - '0';
                if(num > max) max = num;
            }
        }
        for(char c : s){
            if(isdigit(c)){
                num = c - '0';
                if(num > max2 && num != max) max2 = num;
            } 
        }

        return max2;
    }
};

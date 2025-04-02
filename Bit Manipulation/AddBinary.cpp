// #67
class Solution {
public:
    string addBinary(string a, string b) {
        string str = "";
        int i = a.length() - 1, j = b.length() - 1;
        int carry = 0;
        int sum = 0;
        while(i >= 0 || j >= 0 || carry){
            sum = carry;
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';

            str += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(str.begin(), str.end());
        return str;
    }  
};

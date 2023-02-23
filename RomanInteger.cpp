class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> storeKeyValue;
        storeKeyValue['I'] = 1;
        storeKeyValue['V'] = 5;
        storeKeyValue['X'] = 10;
        storeKeyValue['L'] = 50;
        storeKeyValue['C'] = 100;
        storeKeyValue['D'] = 500;
        storeKeyValue['M'] = 1000;
        reverse(s.begin(), s.end());
        int integer = 0;
        integer += storeKeyValue[s[0]];
        for (int i = 1; i < s.length(); i++) {
            if(storeKeyValue[s[i]] >= storeKeyValue[s[i-1]])
                integer += storeKeyValue[s[i]];
            else
                integer -= storeKeyValue[s[i]];
        }
        return integer;
    }
};
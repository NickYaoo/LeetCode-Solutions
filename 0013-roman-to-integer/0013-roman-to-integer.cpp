class Solution {
public:
    int romanToInt(string s) {
        //holds the value of each character
        map<char, int> mp{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        int integers = 0; //contains the value of conversion
        for(int i =0; i < s.length(); i++){
            if(mp[s[i]] < mp[s[i+1]]){
                // case of subtraction
                integers = integers - mp[s[i]];
            }
            else{
                // adds to mp because we dont need to do subtraction
                integers += mp[s[i]];
            }
        }
        return integers;
    }
};
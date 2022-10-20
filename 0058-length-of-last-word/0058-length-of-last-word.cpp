class Solution {
public:
    int lengthOfLastWord(string s) {
        // use this to measure the length
        int counter = 0;
        // ask if there can only be one trailing space
        //trim the trailing space
        int len = s.length() - 1;
        while(len >= 0 && s[len] == ' '){
            len = len - 1;
        }
        for(int i =0; i <= len; i++){
            if(s[i] != ' '){
                // increment counter if not a space
                counter ++;
            }
            if(s[i] == ' '){
                counter = 0;
            }
        }
        return counter;
    }
};
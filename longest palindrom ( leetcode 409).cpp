class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        bool odd = false;
        int result = 0;

        for(auto it: mp){
            if(it.second %2 ==0){
                result+= it.second;
            }
            else{
                odd = true;
                result += it.second-1;
            }
        }
        if(odd==true){
            result++;
        }
        return result;
    }
};

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> distinctIntegers;
        for (int num : nums) {
            distinctIntegers.insert(num);
            int reverseNum = 0, temp = num;
            while (temp > 0) {
                reverseNum = reverseNum * 10 + temp % 10;
                temp /= 10;
            }
            distinctIntegers.insert(reverseNum);
        }
        return distinctIntegers.size();
    }
};

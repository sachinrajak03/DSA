#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n); // Use a vector instead of an array

        for (int i = 1; i <= n; i++) { // Start from 1, not 0
            if (i % 3 == 0) {
                if (i % 5 == 0) {
                    result[i - 1] = "FizzBuzz"; // Store the result at index i - 1
                } else {
                    result[i - 1] = "Fizz";
                }
            } else if (i % 5 == 0) {
                result[i - 1] = "Buzz";
            } else {
                result[i - 1] = to_string(i);
            }
        }

        return result; // Return the constructed vector outside the loop
    }
};

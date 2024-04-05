class Solution {
    // string initialised with "0" because if n=0 then it's obvious that our answer will be '0'.
    string gen = "0";
    int cnt = 1;    // just for the base case to stop the recursion 
private:
    void solve(int n) {
        // base case
        if(cnt == n)
            return;

        string tmp = gen;

        // inverting the string
        for(int i=0; i<tmp.length(); i++) {
            if(tmp[i] == '0') {
                tmp[i] = '1';
            }
            else {
                tmp[i] = '0';
            }
        }

        // reverse string
        reverse(tmp.begin(), tmp.end());

        // add it to original
        gen = gen + "1" + tmp;

        // increment the counter
        ++cnt;

        solve(n);
    }
public:
    char findKthBit(int n, int k) {
        if(n == 1)  return '0'; 
        solve(n);
        char ans = gen[k-1];
        return ans;
    }
};

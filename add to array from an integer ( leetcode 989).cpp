class Solution {
public:
    vector<int> addToArrayForm(vector<int> &A, int K)
    {
        int i, size = A.size();

        for (i = size - 1; i >= 0 && K != 0; i--)
        {
            K = K + A[i];
            A[i] = K % 10;
            K = K / 10;
        }
        while (K != 0)
        {
            A.insert(A.begin(), K % 10);
            K = K / 10;
        }
        return A;
    }
};

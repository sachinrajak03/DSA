class Solution {
public:
    vector<vector<string>> res;
    bool pal(int i,int j,string &s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    void f(int i,string &s,vector<string> ans)
    {
        if(i>=s.size())
        {
            if(ans.size()>0)
               res.push_back(ans);
            return;
        }
        for(int k=i;k<s.size();k++)
        {
            if(pal(i,k,s))
            {
                ans.push_back(s.substr(i,k-i+1));
                f(k+1,s,ans);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        f(0,s,ans);
        return res;
    }
};

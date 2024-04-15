class Solution {
public:
    int minCut(string s) 
    {
        vector<int>mincuts(s.size());
        for(int i=0;i<s.size();i++){
            mincuts[i]=i;
        }
        for(int i=0;i<s.size();i++){
            int start=i;
            int end=i;
            while(start>=0 and end<s.size() and s[start]==s[end]){
                int cuts=(start==0)?0:mincuts[start-1]+1;
                mincuts[end]=min(mincuts[end],cuts);
                start--;
                end++;
            }
            start=i;
            end=i+1;
             while(start>=0 and end<s.size() and s[start]==s[end]){
                int cuts=(start==0)?0:mincuts[start-1]+1;
                mincuts[end]=min(mincuts[end],cuts);
                start--;
                end++;
            }
        }
        return mincuts[s.size()-1];
    }
};

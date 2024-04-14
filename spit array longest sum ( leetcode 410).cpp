class Solution {
public:
    bool possible(vector<int>&arr,int k, int mx_sm){
        int cnt = 0, sm = 0;
        for(auto&it:arr){
            sm+=it;
            if(it>mx_sm)return false; //Condition missed earlier
            if(sm>mx_sm)cnt++,sm=it;
        }
        return cnt<k;
    }
    int splitArray(vector<int>& arr, int k) {
        int lo = 0, hi = accumulate(arr.begin(),arr.end(),0ll);
        int ans = 1e9;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(possible(arr,k,mid)){
                ans=mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return ans;
    }
};

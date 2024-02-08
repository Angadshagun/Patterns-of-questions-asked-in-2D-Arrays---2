// Given an array of intervals where arr[i] = [start, end], return the minimum number of intervals
// you need to remove to make the rest of the intervals non-overlapping.

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int n = v.size();

        int maxi = v[0][1];
        int ans = 0;
        
        for(int i = 1; i < n; i++){
            if(v[i][0] < maxi){
                ans++;
                maxi = min(maxi , v[i][1]);
            }
            else
                maxi = v[i][1];
            
        }

        return ans;
    }
};
// Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
// create a function which returns a vector of the non-overlapping intervals that cover all the
// intervals in the input.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>nums;

        int s = v.size();
        int mini = v[0][0];
        int maxi = v[0][1];

        for(int i = 1; i < s ; i++){
            if(v[i][0] <= maxi)
                maxi = max(v[i][1] , maxi);
            else{
                nums.push_back({mini , maxi});
                mini = v[i][0];
                maxi = v[i][1];
            }

        }

        nums.push_back({mini , maxi});
        return nums;
    }
};
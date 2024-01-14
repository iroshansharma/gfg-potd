/*

Author : Roshan Sharma
Date : 15/01/2024
Problem : Grinding Geek
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/grinding-geek/1


*/


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int fun(int i, int n, int total, vector<int> &cost, vector<vector<int>> &memo)
{
    if (i == n)
        return 0;

    if (memo[i][total] != -1)
        return memo[i][total];

    int result = fun(i + 1, n, total, cost, memo);

    if (cost[i] <= total)
    {
        int y = total - cost[i] * 0.1;
        result = max(result, 1 + fun(i + 1, n, y, cost, memo));
    }

    memo[i][total] = result;
    return result;
}
    int max_courses(int n, int total, vector<int> &cost)
{
    vector<vector<int>> memo(n + 1, vector<int>(total + 1, -1));
    return fun(0, n, total, cost, memo);
}

};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends

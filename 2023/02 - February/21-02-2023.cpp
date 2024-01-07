/*
Author : Roshan Sharma
Date : 21/02/2023
Problem : Fill the Matrix
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/fill-the-matrix--170647/1
Video Solution : nii
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        int ans=0;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++)
				ans=max(ans,abs(x-i)+abs(y-j));
		return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
